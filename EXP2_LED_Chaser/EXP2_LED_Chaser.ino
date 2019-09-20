void setup()
{
  for(int i=10;i<14;i++)
  {
    pinMode(i,OUTPUT);
  }
}

void loop()
{
  allledsoff();
  for(int i=10;i<14;i++)
  {
    if(i==13)
    {
      digitalWrite(i,HIGH);
      digitalWrite(i-3,HIGH);
      delay(100);
    }
    else
    {
      digitalWrite(i,HIGH);
      digitalWrite(i+1,HIGH); 
      delay(100);
      allledsoff();
    }
  }
}
    
    void allledsoff()
    {
      for(int i=10;i<14;i++)
      {
        digitalWrite(i,LOW);
      }
      delay(200);
    }