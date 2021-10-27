
#include <CapacitiveSensor.h>

CapacitiveSensor a = CapacitiveSensor(12,2);
CapacitiveSensor b = CapacitiveSensor(12,3);
CapacitiveSensor c = CapacitiveSensor(12,4);
CapacitiveSensor d = CapacitiveSensor(12,5);
CapacitiveSensor e = CapacitiveSensor(12,6);
CapacitiveSensor f = CapacitiveSensor(12,9);
CapacitiveSensor g = CapacitiveSensor(12,10);
CapacitiveSensor h = CapacitiveSensor(12,11);
int buzzer = 13;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(buzzer,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  long SEN1 = a.capacitiveSensorRaw(30);
  long SEN2 = b.capacitiveSensorRaw(30);
  long SEN3 = c.capacitiveSensorRaw(30);
  long SEN4 = d.capacitiveSensorRaw(30);
  long SEN5 = e.capacitiveSensorRaw(30);
  long SEN6 = f.capacitiveSensorRaw(30);
  long SEN7 = g.capacitiveSensorRaw(30);
  long SEN8 = h.capacitiveSensorRaw(30);

Serial.println(SEN1);
delay(15);
  if (SEN1 > 10)
  {
    tone(13, 262, 100);
    }

  if (SEN2 > 10)
  {
    tone(13, 294, 100);
    }

  if (SEN3 > 10)
  {
    tone(13, 330, 100);
    }
    
  if (SEN4 > 10)
  {
    tone(13, 349, 100);
    }  
    
  if (SEN5 > 10)
  {
    tone(13, 392, 100);
    }  
      
  if (SEN6 > 10)
  {
    tone(13, 440, 100);
    }    
  if (SEN7 > 10)
  {
    tone(13, 494, 100);
    } 
  if (SEN8 > 10)
  {
    tone(13, 523, 100);
    }  
}
