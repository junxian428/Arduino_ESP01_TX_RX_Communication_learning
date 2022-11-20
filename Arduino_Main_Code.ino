char data;

void setup() {

// put your setup code here, to run once:

Serial.begin(9600);

pinMode(1,OUTPUT);

}

void loop()

{

// put your main code here, to run repeatedly:

while(Serial.available()) {

data=Serial.read();

Serial.println(data);

digitalWrite(1,HIGH);

delay(500);

digitalWrite(1,LOW);

}

}
