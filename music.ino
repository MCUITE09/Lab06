#define NOTE_zero 0
#define NOTE_HDo 1047
#define NOTE_HDoS 1109
#define NOTE_HRe 1175
#define NOTE_HReS 1245
#define NOTE_HMi 1319
#define NOTE_HFa 1397
#define NOTE_HFaS 1480
#define NOTE_HSo 1568
#define NOTE_HSoS 1661
#define NOTE_HLa 1760
#define NOTE_HLaS 1865
#define NOTE_HSi 1976
#define NOTE_HHDo 2094

#define NOTE_Si 988

#define WHOLE 1 //全分符
#define HALF 0.5 //半分符
#define QUARTER 0.25 //4
#define EIGHTH 0.125 //8
#define SIXTEENTH 0.0625 //16

int tune[] = { NOTE_zero, NOTE_Si, NOTE_HDo,
NOTE_HDoS, NOTE_HRe, NOTE_HMi, NOTE_HRe,
NOTE_zero, NOTE_HDoS, NOTE_HRe, NOTE_HMi,
NOTE_HFaS, NOTE_HLa, NOTE_HSo, NOTE_zero,
NOTE_HSi, NOTE_HHDo, NOTE_HLa, NOTE_HSi,
NOTE_HSo, NOTE_HLa, NOTE_HFa, NOTE_HSo,
NOTE_HFa, NOTE_HRe};

float duration[] = { 
QUARTER,SIXTEENTH, SIXTEENTH, SIXTEENTH,
SIXTEENTH, SIXTEENTH, SIXTEENTH,EIGHTH,
SIXTEENTH, SIXTEENTH, SIXTEENTH,SIXTEENTH,
SIXTEENTH,SIXTEENTH,EIGHTH,
SIXTEENTH, SIXTEENTH, SIXTEENTH,SIXTEENTH,
SIXTEENTH, SIXTEENTH, SIXTEENTH,SIXTEENTH,
EIGHTH+SIXTEENTH,SIXTEENTH,
};

int length;
void setup() {
pinMode(8, OUTPUT);
length = sizeof(tune) /sizeof(tune[0]);
}
void loop() {

 for (int x=0; x<length; x++) {
tone(8, tune[x]);
delay(2500 *duration[x]);
noTone(8);
}
delay(5000);

}
