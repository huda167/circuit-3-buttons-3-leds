const int button1=11;
const int button2=12;
const int button3=13;

const int led1=2;
const int led2=3;
const int led3=4;


void setup()
{
  pinMode(button1, INPUT_PULLUP);
  pinMode(button2, INPUT_PULLUP);
  pinMode(button3, INPUT_PULLUP);
  
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}

void loop()
{
  
  int button1State=digitalRead(button1);
  int button2State=digitalRead(button2);
  int button3State=digitalRead(button3);
  
  if (button1State==LOW)
    digitalWrite(led1,HIGH);
  else
    digitalWrite(led1,LOW);
  
  if (button2State==LOW)
    digitalWrite(led2,HIGH);
  else
    digitalWrite(led2,LOW);
    
  if (button3State==LOW)
    digitalWrite(led3,HIGH);
  else
    digitalWrite(led3,LOW);
  
  
}