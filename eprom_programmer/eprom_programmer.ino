const int vcc5v =4;
const int vcc6v =5;
const int vpp13v =7;
const int vpp5v =6;
int vcc=0;
int vpp=0;


void setup() {
  // put your setup code here, to run once:
pinMode(vcc5v,OUTPUT);
pinMode(vcc6v,OUTPUT);
pinMode(vpp13v,OUTPUT);
pinMode(vpp5v,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  progMode();
  digitalWrite(vpp13v,HIGH);
  digitalWrite(vcc6v,HIGH);
  
}
void progMode(){
  digitalWrite(vpp5v,LOW);
  digitalWrite(vcc5v,LOW);
  
  vpp=vpp13v;
  vcc=vcc6v;
}
void readMode(){
  digitalWrite(vpp13v,LOW);
  digitalWrite(vcc6v,LOW);
  
  vpp=vpp5v;
  vcc=vcc5v;
}
