int inPin = A2;
int x = analogRead(A2);


void setup()
{
  pinMode(inPin,INPUT);
  pinMode(LED_BUILTIN,OUTPUT);
  
  Serial.begin(9600);
}

void loop()
{
   x = analogRead(A2);
   Serial.println(x);
  delay(250);
  
  if(x <= 512){ digitalWrite(LED_BUILTIN,HIGH);}
  else{digitalWrite(LED_BUILTIN,LOW);}
  
   
}
