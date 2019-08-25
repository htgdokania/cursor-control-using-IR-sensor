  void setup() {
Serial.begin(9600);
}

void loop() {
int sensorValue1 = analogRead(A0);
int sensorValue2 = analogRead(A1);
int sensorValue3 = analogRead(A2);
int sensorValue4= analogRead(A3);
int sensorValue5 = analogRead(A4);
int sensorValue6 = analogRead(A5);

if(sensorValue1>600 && sensorValue1<750 )
  sensorValue1=map(sensorValue1,750,600,0,6);
if(sensorValue1<600 && sensorValue1>50)
  sensorValue1=map(sensorValue1,600,50,6,10);

if(sensorValue2>500 && sensorValue2<640)
  sensorValue2=map(sensorValue2,640,500,0,6);
if(sensorValue2<500 && sensorValue2>50)
  sensorValue2=map(sensorValue2,500,50,6,10);
if(sensorValue3>590 && sensorValue3<720)
  sensorValue3=map(sensorValue3,720,590,0,6);
if(sensorValue3<590 && sensorValue3>50)
  sensorValue3=map(sensorValue3,590,50,6,10);
if(sensorValue4>630 && sensorValue4<700)
  sensorValue4=map(sensorValue4,700,630,0,6);
if(sensorValue4<630 && sensorValue4>50)
  sensorValue4=map(sensorValue4,630,50,6,10);
if(sensorValue5>440 && sensorValue5<560)
  sensorValue5=map(sensorValue5,560,440,0,6);
if(sensorValue5<440 && sensorValue5>50)
  sensorValue5=map(sensorValue5,440,50,6,10);
if(sensorValue6>550 && sensorValue6<670)
  sensorValue6=map(sensorValue6,670,550,0,6);
if(sensorValue6<550 && sensorValue6>50)
  sensorValue6=map(sensorValue6,550,50,6,10);




//Serial.println(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>");
if(sensorValue1 >=0 && sensorValue1 <=10)
  Serial.println(sensorValue1);
else 
{
  sensorValue1=0;
  Serial.println(sensorValue1);
}
if(sensorValue2 >=0 && sensorValue2 <=10)
  Serial.println(sensorValue2);
else 
{
  sensorValue2=0;
  Serial.println(sensorValue2);
}
if(sensorValue3 >=0 && sensorValue3 <=10)
  Serial.println(sensorValue3);
else 
{
  sensorValue3=0;
  Serial.println(sensorValue3);
}

if(sensorValue4 >=0 && sensorValue4 <=10)
  Serial.println(sensorValue4);
else 
{
  sensorValue4=0;
  Serial.println(sensorValue4);
}

if(sensorValue5 >=0 && sensorValue5 <=10)
  Serial.println(sensorValue5);
else 
{
  sensorValue5=0;
  Serial.println(sensorValue5);
}

if(sensorValue6 >=0 && sensorValue6 <=10)
  Serial.println(sensorValue6);
else 
{
  sensorValue6=0;
  Serial.println(sensorValue6);
}
//Serial.println("******************************************************************");
delay(100);

}
