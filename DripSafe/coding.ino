int Water_Sensor1=0;
int Water_Sensor2=0;
void setup ()
{
  pinMode(A0,INPUT);
  pinMode(A1,INPUT);
  Serial.begin(9600);
}
void loop ()
{
  Water_Sensor1=analogRead(A0);
  Water_Sensor2=analogRead(A1);
  Serial.println("First Value");
  Serial.println(Water_Sensor1);
  Serial.println("Second Value");
  Serial.println(Water_Sensor2);
  delay(2000);
  if (Water_Sensor2 > 700 && Water_Sensor2 < 900)
  {
    if(Water_Sensor1>500 && Water_Sensor1>10)
    {
      digitalWrite(13,HIGH);
    }
  }
    else 
  {
     digitalWrite(13,LOW);
  }
  
}