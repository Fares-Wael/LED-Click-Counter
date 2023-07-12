// C++ code
//
const int red=11;
const int yellow=12;
const int green=13;
const int button=10;
int Reading = 0, counter=0;
void setup()
{
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
  pinMode(button, INPUT);

}

void loop()
{
  Reading = digitalRead(button);
if (Reading == HIGH)
{
counter++;
if(counter==1)
{ digitalWrite(red, HIGH);
delay(250);
}
  if(counter==2)
{ digitalWrite(yellow, HIGH);
delay(250);
}
  if(counter==3)
{ digitalWrite(green, HIGH);
delay(250);
}
if(counter==4)
{ digitalWrite(red, LOW);
 digitalWrite(yellow, LOW);
 digitalWrite(green, LOW);counter=0; }
delay(250);
}}