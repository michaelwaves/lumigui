const int photoResistor = A1;
const int pR2 = A2;
const int pR3 = A3;
const int pR4 = A4;
const int pR5 = A5;
const int ledPin=5;

int forwardValue;
int backValue;
int speechValue;
bool speak=false;
int submitValue;
int deleteValue;
int threshold=600;

void setup() {
  // put your setup code here, to run once:
  pinMode(ledPin, OUTPUT);
  pinMode(photoResistor,INPUT);
  Serial.begin(9600);
  while(!Serial);
  //digitalWrite(ledPin,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  forwardValue = analogRead(photoResistor);
  backValue = analogRead(pR2);
  submitValue = analogRead(pR3);
  speechValue = analogRead(pR4);
  deleteValue = analogRead(pR5);

//  Serial.println(forwardValue);
  //Serial.println(backValue);
  //Serial.println(speechValue);

  if (forwardValue<threshold){
    Serial.println("forward");
  };
  if (backValue<threshold){
    Serial.println("back");
  };
  if (submitValue<threshold){
    Serial.println("submit");
  };
  if (speechValue<threshold){
    Serial.println("speak");
    speak = !speak;
  };
  if (deleteValue<threshold){
    Serial.println("delete");
  };

  speak? digitalWrite(ledPin,HIGH): digitalWrite(ledPin, LOW);
  String prevString=Serial.readString()

  delay(100);

/*
  Serial.println(forwardValue);
  Serial.print(backValue);
  Serial.print(speechValue);

  if (forwardValue>threshold && speechValue>threshold && backValue>threshold){
    digitalWrite(ledPin,LOW);
  }
  else{
    digitalWrite(ledPin, HIGH);
  }*/

}
