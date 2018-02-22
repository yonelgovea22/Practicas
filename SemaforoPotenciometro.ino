
const int Sv = 6, Sa=5, Sr=4;
const int Pv=2, Pr=3;
const int btn=9;

int boton;
int valor = analogRead(A0);


void setup() {
  
  pinMode(Sv, OUTPUT);
  pinMode(Sa, OUTPUT);
  pinMode(Sr, OUTPUT);
  pinMode(Pv, OUTPUT);
  pinMode(Pr, OUTPUT);
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

boton=digitalRead(btn);
if(boton==LOW){
  digitalWrite(Sv,HIGH);
  digitalWrite(Pr,HIGH);
  
  }else{
    for(int i=0; i<3;i++){
      digitalWrite(Sv,LOW);
      delay(valor);
      digitalWrite(Sv,HIGH);
      delay(valor);
      }
      digitalWrite(Sv,LOW);
      digitalWrite(Sa,HIGH);
      delay(valor);
      digitalWrite(Sa,LOW);
      digitalWrite(Sr, HIGH);
      digitalWrite(Pv,HIGH);
      digitalWrite(Pr,LOW);
      delay(valor);
      digitalWrite(Sr,LOW);
      digitalWrite(Pv,LOW);
      digitalWrite(Pr,HIGH);
  }
    }





  

