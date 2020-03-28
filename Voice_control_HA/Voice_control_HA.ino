#define fan 2
#define bulb 3

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(fan, OUTPUT);
  pinMode(bulb, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available() == 1)
  {
    String val = Serial.readString();
    Serial.println(val);
    if(val == "fan on")
    {
      digitalWrite(fan, HIGH);
    }
    if(val == "fan off")
    {
      digitalWrite(fan, LOW);
    }
    if(val == "bulb on")
    {
      digitalWrite(bulb, HIGH);
    }
    if(val == "bulb off")
    {
      digitalWrite(bulb, LOW);
    }
    if(val == "all on")
    {
      digitalWrite(fan, HIGH);
      digitalWrite(bulb, HIGH);
    }
    if(val == "all off")
    {
      digitalWrite(bulb, LOW);
      digitalWrite(fan, LOW);
    }
  }
}
