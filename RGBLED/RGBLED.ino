int red_light_pin = 9;
int green_light_pin = 10;
int blue_light_pin = 11;

void setup() {
    pinMode(red_light_pin, OUTPUT);
    pinMode(green_light_pin, OUTPUT);
    pinMode(blue_light_pin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
    RGB_color(49, 207, 222); 

}

void RGB_color (int red_value, int green_value, int blue_value){
    analogWrite(red_light_pin, 255 - red_value);
    analogWrite(green_light_pin, 255 - green_value);
    analogWrite(blue_light_pin, 255 - blue_value);
  
}
