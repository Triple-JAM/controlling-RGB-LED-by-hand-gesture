/*
  controlling LED RGB by hand gesture
  DATA: 28 May 2025
  description:this program reads data from the UART interface to control an LED RGB adjusting both color and brightness
              while simultaneously displaying the channel number on a seven segment  
*/

const int red = 11;
const int blue = 12;
const int green = 10;
const int anode = 3;

bool check = false;
int Channel_brightness = 0;
int data;

void setup() {
  Serial.begin(9600);
  
  pinMode(anode,OUTPUT);
  pinMode(red,OUTPUT);
  pinMode(green,OUTPUT);
  pinMode(blue,OUTPUT);

  digitalWrite(red,HIGH);
  digitalWrite(green,HIGH);
  digitalWrite(blue,HIGH);
  
  DDRC = 0b11111111;
}

void loop() {
  while(Serial.available())
  {
    data = Serial.read();
    Serial.println(data);

    if(check == false)
     {
      switch(data)
      {
        case 49:
        digitalWrite(blue,HIGH);
        digitalWrite(green,HIGH);
        digitalWrite(red,LOW);

        PORTC = 0b00000110;
        break;
  
        case 50:
        digitalWrite(blue,HIGH);
        digitalWrite(red,HIGH);
        digitalWrite(green,LOW);

        PORTC = 0b00111011;
        break;

        case 51:
        digitalWrite(red,HIGH);
        digitalWrite(green,HIGH);
        digitalWrite(blue,LOW);

        PORTC = 0b00011111;
        break;
      }
   }

    if(data == 35)
      {
        Serial.flush();
        check = true;
      }
  }
 
  if(check == true)
     {
       Channel_brightness = map(data-48,0,9,0,255);
       analogWrite(anode,Channel_brightness);
       check = false;
     }
}
