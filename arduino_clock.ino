int a = 2;int b = 3;int c = 4;int d = 5;int e = 6;int f = 7;int g = 8;int V;int D;int Z;int E;int time1 = 1;int time2 = 2;int i;int zaehler;int ZH;int minute;
                                                                    int timedelay=6000;           
void setup() {
  Serial.begin(9600);
  for (i = 0; i <= 13; i++)
{pinMode(i, OUTPUT);}}
void loop() {

//dot();

  for ( V = 0; V <= 2; V++) {
    for ( D = 0; D <= 9; D++) {

      for ( Z = 0; Z <= 5; Z++) {

        for ( E = 0; E <= 9; E++)

          for (ZH = 0; ZH <= timedelay; ZH++) {
            Serial.print(V);
            Serial.print(D);
            Serial.print(Z);
            Serial.println(E);
            delay(time1); {

              digitalWrite(10, HIGH);
              {
                if (E == 0)
                  zero();
              }
              {
                if (E == 1)
                  one();
              }
              {
                if (E == 2)
                  two();
              }
              {
                if (E == 3)
                  drei();
              }
              {
                if (E == 4)
                  four();
              }
              {
                if (E == 5)
                  five();
              }
              {
                if (E == 6)
                  six();
              }
              {
                if (E == 7)
                  seven();
              }
              {
                if (E == 8)
                  eight();
              }
              {
                if (E == 9)
                  nine();
              }
              delay(time2);
              digitalWrite(10, LOW);
            }

            {
              digitalWrite(11, HIGH);
              {

                if (Z == 0)
                  zero();
              }
              {
                if (Z == 1)
                  one();
              }
              {
                if (Z == 2)
                  two();
              }
              {
                if (Z == 3)
                  three();
              }
              {
                if (Z == 4)
                  four();
              }
              {
                if (Z == 5)
                  five();
              }
              {
                if (Z == 6)
                  six();
              }
              {
                if (Z == 7)
                  seven();
              }
              {
                if (Z == 8)
                  eight();
              }
              {
                if (Z == 9)
                  nine();
              }
              delay(time2);
              digitalWrite(11, LOW);
            }


            {
              digitalWrite(12, HIGH);
              {

                if (D == 0)
                  zero();
              }
              {
                if (D == 1)
                  one();
              }
              {
                if (D == 2)
                  two();
              }
              {
                if (D == 3)
                  three();
              }
              {
                if (D == 4)
                  four();
              }
              {
                if (D == 5)
                  five();
              }
              {
                if (D == 6)
                  six();
              }
              {
                if (D == 7)
                  seven();
              }
              {
                if (D == 8)
                  eight();
              }
              {
                if (D == 9)
                  nine();
              }
              delay(time2);
              digitalWrite(12, LOW);
            }

            {
              digitalWrite(13, HIGH);
              {

                if (V == 0)
                  zero();
              }
              {
                if (V == 1)
                  one();
              }
              {
                if (V == 2)
                  two();
              }
              {
                if (V == 3)
                  three();
              }
              {
                if (V == 4)
                  four();
              }
              {
                if (V == 5)
                  five();
              }
              {
                if (V == 6)
                  six();
              }
              {
                if (V == 7)
                  seven();
              }
              {
                if (V == 8)
                  eight();
              }
              {
                if (V == 9)
                  nine();
              }
              delay(time2);
              digitalWrite(13, LOW); {
                if (V == 2 && D == 4 && Z == 0 && E == 0)
                {
                V = 0;
                D = 0;
                Z = 0;
                E = 0#
              }
            }
          }
        }
      }
    }
  }
}
void dot(){
  digitalWrite(12,HIGH);
  digitalWrite(9,HIGH);
}
void zero() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, LOW);
}
void one() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void two() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, LOW);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void three() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, HIGH);
}
void four() {
  digitalWrite(a, LOW);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void five() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void six() {
  digitalWrite(a, HIGH);
  digitalWrite(b, LOW);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void seven() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, LOW);
  digitalWrite(e, LOW);
  digitalWrite(f, LOW);
  digitalWrite(g, LOW);
}
void eight() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, HIGH);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
void nine() {
  digitalWrite(a, HIGH);
  digitalWrite(b, HIGH);
  digitalWrite(c, HIGH);
  digitalWrite(d, HIGH);
  digitalWrite(e, LOW);
  digitalWrite(f, HIGH);
  digitalWrite(g, HIGH);
}
