/*
  Bu program ilk çizgi izleyen programıdır.
  Motor pinleri :   A|Motor: 13,12,10   B|Motor: 9,2,11
  Sensör pinleri : D3,D4,D5,D6,D7,D8
*/

#define AMotorIleri 13
#define AMotorGeri 12
#define BMotorIleri 9
#define BMotorGeri 2

#define enA 10
#define enB 11

#define Sensor1pin 3
#define Sensor2pin 4
#define Sensor3pin 5
#define Sensor4pin 6
#define Sensor5pin 7
#define Sensor6pin 8

int Sensor1durum ;
int Sensor2durum ;
int Sensor3durum ;
int Sensor4durum ;
int Sensor5durum ;
int Sensor6durum ;

int AMotorHiz ;
int BMotorHiz ;

int sayac = 0;
void setup() {

  pinMode(Sensor1pin, INPUT);
  pinMode(Sensor2pin, INPUT);
  pinMode(Sensor3pin, INPUT);
  pinMode(Sensor4pin, INPUT);
  pinMode(Sensor5pin, INPUT);
  pinMode(Sensor6pin, INPUT);

  pinMode(AMotorIleri, OUTPUT);
  pinMode(AMotorGeri, OUTPUT);
  pinMode(BMotorIleri, OUTPUT);
  pinMode(BMotorGeri, OUTPUT);

  pinMode(enA, OUTPUT);
  pinMode(enB, OUTPUT);
}



void loop() {

ad:

  Sensor1durum = digitalRead(Sensor1pin);
  Sensor2durum = digitalRead(Sensor2pin);
  Sensor3durum = digitalRead(Sensor3pin);
  Sensor4durum = digitalRead(Sensor4pin);
  Sensor5durum = digitalRead(Sensor5pin);
  Sensor6durum = digitalRead(Sensor6pin);


  if ((Sensor1durum == HIGH) && (Sensor2durum == HIGH) && (Sensor3durum == HIGH) && (Sensor4durum == HIGH) && (Sensor5durum == HIGH) && (Sensor6durum == HIGH)) {

    AMotorHiz = 255;
    BMotorHiz = 255;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, HIGH );
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

    delay(500);

  }
  else if ((Sensor1durum == LOW) && (Sensor2durum == LOW) && (Sensor3durum == LOW) && (Sensor4durum == LOW) && (Sensor5durum == LOW) && (Sensor6durum == LOW)) {

    AMotorHiz = 255;
    BMotorHiz = 255;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

  }

  else if ((Sensor1durum == LOW) && (Sensor2durum == LOW) && (Sensor3durum == HIGH) && (Sensor4durum == LOW) && (Sensor5durum == LOW) && (Sensor6durum == LOW)) {

    AMotorHiz = 50 ;
    BMotorHiz = 255 ;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

  }
  else if ((Sensor1durum == LOW) && (Sensor2durum == LOW) && (Sensor3durum == LOW) && (Sensor4durum == HIGH) && (Sensor5durum == LOW) && (Sensor6durum == LOW)) {

    AMotorHiz = 255 ;
    BMotorHiz = 50 ;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

  }
  else if ((Sensor1durum == LOW) && (Sensor2durum == HIGH) && (Sensor3durum == LOW) && (Sensor4durum == LOW) && (Sensor5durum == LOW) && (Sensor6durum == LOW)) {

    AMotorHiz = 50 ;
    BMotorHiz = 255 ;

    digitalWrite(AMotorIleri, LOW);
    digitalWrite(AMotorGeri, HIGH);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

  }
  else if ((Sensor1durum == LOW) && (Sensor2durum == LOW) && (Sensor3durum == LOW) && (Sensor4durum == LOW) && (Sensor5durum == HIGH) && (Sensor6durum == LOW)) {

    AMotorHiz = 255 ;
    BMotorHiz = 50 ;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, LOW);
    digitalWrite(BMotorGeri, HIGH);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

  }

  else if ((Sensor1durum == LOW) && (Sensor2durum == LOW) && (Sensor5durum == HIGH) && (Sensor6durum == HIGH))  {



    AMotorHiz = 150 ;
    BMotorHiz = 150 ;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

    do {

      Sensor1durum = digitalRead(Sensor1pin);
      Sensor2durum = digitalRead(Sensor2pin);
      Sensor3durum = digitalRead(Sensor3pin);
      Sensor4durum = digitalRead(Sensor4pin);
      Sensor5durum = digitalRead(Sensor5pin);
      Sensor6durum = digitalRead(Sensor6pin);

      if ((Sensor1durum == HIGH) && (Sensor2durum == HIGH) && (Sensor3durum == HIGH) && (Sensor4durum == HIGH) && (Sensor5durum == HIGH) && (Sensor6durum == HIGH)) {
        sayac = 0;
        goto ad;

      }
      delay(1);
      sayac = sayac + 1;

    } while (sayac < 150);

    sayac = 0;

    sag();

  }

  else if ((Sensor1durum == HIGH) && (Sensor2durum == HIGH) && (Sensor6durum == LOW) && (Sensor5durum == LOW)) {



    AMotorHiz = 150 ;
    BMotorHiz = 150 ;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

    do {

      Sensor1durum = digitalRead(Sensor1pin);
      Sensor2durum = digitalRead(Sensor2pin);
      Sensor3durum = digitalRead(Sensor3pin);
      Sensor4durum = digitalRead(Sensor4pin);
      Sensor5durum = digitalRead(Sensor5pin);
      Sensor6durum = digitalRead(Sensor6pin);

      if ((Sensor1durum == HIGH) && (Sensor2durum == HIGH) && (Sensor3durum == HIGH) && (Sensor4durum == HIGH) && (Sensor5durum == HIGH) && (Sensor6durum == HIGH)) {
        sayac = 0;
        goto ad;

      }
      delay(1);
      sayac = sayac + 1;

    } while (sayac < 150);
    sayac = 0;
    sol();

  }
}


void sol()
{
  do {

    AMotorHiz = 200 ;
    BMotorHiz = 255 ;

    digitalWrite(AMotorIleri, LOW);
    digitalWrite(AMotorGeri, HIGH);
    digitalWrite(BMotorIleri, HIGH);
    digitalWrite(BMotorGeri, LOW);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

    Sensor3durum = digitalRead(Sensor3pin);

  } while (Sensor3durum == LOW);
}

void sag()
{
  do {
    AMotorHiz = 255 ;
    BMotorHiz = 200 ;

    digitalWrite(AMotorIleri, HIGH);
    digitalWrite(AMotorGeri, LOW);
    digitalWrite(BMotorIleri, LOW);
    digitalWrite(BMotorGeri, HIGH);
    analogWrite(enA, AMotorHiz);
    analogWrite(enB, BMotorHiz);

    Sensor4durum = digitalRead(Sensor4pin);


  } while (Sensor4durum == LOW);

}


