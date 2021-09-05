int flag =0;

void setup(){
  pinMode(8, OUTPUT);
  pinMode(7, INPUT);
}

void loop()
{
  int inputValue = digitalRead(7);

  if(inputValue == HIGH)
  {
    if(flag ==0)
    flag =1;
  } else{
    if(flag ==1){
    int ledStatus = digitalRead(7);
    if(ledStatus == HIGH)
    digitalWrite(8, LOW);
    else
    digitalWrite(8, HIGH);
    flag = 0;
  }
  }
  delay(100);
}
  
