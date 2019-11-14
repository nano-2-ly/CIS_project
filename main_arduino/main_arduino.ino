void cam_capture(){
  digitalWrite(9,HIGH);
  delay(5);
  digitalWrite(9,LOW);
}
void x_up(){
  Serial.print("G91\n");
  Serial.print("G0 X2\n");
  delay(1000);
}
void x_down(){
  Serial.print("G0 X-2\n");
  delay(1000);
}

void y_up(){
  Serial.print("G0 Y2\n");
  delay(1000);
}

void y_down(){
  Serial.print("G0 Y-2\n");
  delay(1000);
}

void z_up(){
  Serial.print("G0 Z2\n");
  delay(1000);
}

void z_down(){
  Serial.print("G0 Z-2\n");
  delay(1000);
}

void cam_up(){
  
}

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<4;i++){
    cam_capture();
    x_up();
    delay(1000);
  }
  y_up();

  for(int j=0;j<4;j++){
    cam_capture();
    x_down();
    delay(1000);
  }
  y_down();
}
