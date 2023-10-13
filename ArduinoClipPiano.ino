#include <CapacitiveSensor.h>
#define DO 523.25
#define RE 587.33
#define MI 659.26
#define FA 698.46
#define SOL 783.99
#define LA 880
#define SI 987.77
#define RE2 1174.66
#define DO2 1062
#define DoS 554.37
#define RES 622.25
#define FAS 739.99
#define SOLS 830.61
#define FAS2 1479.98

int buzzer = 12;
const int buttonPin = 2;
const int ledPin = 3;



CapacitiveSensor   clip4 = CapacitiveSensor(8,4);
CapacitiveSensor   clip5 = CapacitiveSensor(8,5);
CapacitiveSensor   clip6 = CapacitiveSensor(8,6);


void athleticPlay(int buzzerPin){
  
  tone(buzzerPin, 698);
  delay(495);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(452);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(339);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(318);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(393);
  noTone(buzzerPin);

  tone(buzzerPin, 1245);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(455);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(420);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(311);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(302);
  noTone(buzzerPin);

  tone(buzzerPin, 1245);
  delay(280);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(270);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(357);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(707);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(389);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 698);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(800);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 880);
  delay(275);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(264);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(375);
  noTone(buzzerPin);

  tone(buzzerPin, 1245);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(416);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(420);
  noTone(buzzerPin);

  tone(buzzerPin, 988);
  delay(357);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(355);
  noTone(buzzerPin);

  tone(buzzerPin, 1245);
  delay(384);
  noTone(buzzerPin);

  tone(buzzerPin, 1175);
  delay(511);
  noTone(buzzerPin);

  tone(buzzerPin, 1047);
  delay(600);
  noTone(buzzerPin);

  tone(buzzerPin, 932);
  delay(1518);
  noTone(buzzerPin);
}

void setup()
{
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin,INPUT_PULLUP);
}
void loop()
{

  long readClip4 = clip4.capacitiveSensor(30);
  long readClip5 = clip5.capacitiveSensor(30);
  long readClip6 = clip6.capacitiveSensor(30);
  

  if(readClip6 > 1000)
    tone(buzzer, DO);  
  else if(readClip5 > 1000)
    tone(buzzer, RE); 
  else if(readClip4 > 1000)
    tone(buzzer, MI);
  else
    noTone(buzzer);

  Serial.println(readClip6);
  Serial.println(readClip5);
  Serial.println(readClip4);
  if(digitalRead(buttonPin) == LOW){
    digitalWrite(ledPin, HIGH);
    athleticPlay(buzzer);
    digitalWrite(ledPin,LOW);
  }
}
