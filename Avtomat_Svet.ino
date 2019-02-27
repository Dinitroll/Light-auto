int a=A1;
int x=A0;
int val = 0;
int val1 = 0;
int sw = 12;
int but = 8;
int r = 9;
void setup() {
pinMode(a, INPUT_PULLUP);
pinMode(x, INPUT);
pinMode(but, INPUT_PULLUP);
pinMode(sw, INPUT);
pinMode(r, OUTPUT);
Serial.begin(9600);
}

void loop() {
  int s = digitalRead(sw);
if(s == 1){
  Auto();
  Timer();
}
else{
  digitalWrite(r,LOW);
}

}
void Auto(){
int b = digitalRead(but);
val = analogRead(a);
val1 = analogRead(x);
int c=val+val1;
if ((b == 0)&&(c > 1750)){
  digitalWrite(r,HIGH);
}
else if((b == 0)&&(c < 1700)){
  digitalWrite(r,LOW);
}
}
void Timer(){
  int b = digitalRead(but);
  if(b == 1){
  delay(6000);
  digitalWrite(r,HIGH);
  }
}


