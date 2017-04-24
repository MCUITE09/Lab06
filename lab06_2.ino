
#define LDo 131
#define LRe 139
#define LMi 147
#define LFa 156
#define LSo 165
#define LLa 175
#define LSi 185

#define Do 262
#define Re 294
#define Mi 330
#define Fa 349
#define So 392
#define La 440
#define Si 494

#define HSo 523
#define HLa 587
#define HSi 659

int tune[] = {LDo,LRe,LMi,LFa,LSo,LLa,LSi,Do,Re,Mi,Fa,So,La,Si,HSo,HLa,HSi};

#include <Keypad.h>
const byte ROWS = 4;
const byte COLS = 4;
char keys[ROWS][COLS]={
  {'F','E','D','C'},
  {'B','3','6','9'},
  {'A','2','5','8'},
  {'0','1','4','7'}
  };
  byte rowPins[ROWS]={6,7,8,9};
byte colPins[COLS]={2,3,4,5};
Keypad keypad = Keypad(makeKeymap(keys),rowPins,colPins,ROWS,COLS);

void setup() {
Serial.begin(9600); 
pinMode(13, OUTPUT);
}

void loop() {
char key = keypad.getKey();
 if (key!=NO_KEY){
     if(key>='A' && key<='F')
     {
       key = key - 'A' + 10;
     }  
     if(key>='0' && key <='9')
     {
      key = key -'0';
     }
       Serial.println(key);
       tone(13,tune[key]);
       delay(200);
       noTone(13);
   
  
 }
}
