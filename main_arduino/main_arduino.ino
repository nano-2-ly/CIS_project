void cam_capture(){
  digitalWrite(9,HIGH);
  delay(1000);
  digitalWrite(9,LOW);
}
void x_up(){
  Serial.print("G91\n");
  Serial.print("G0 X1\n");
  delay(1000);
}
void x_down(){
  Serial.print("G0 X-1\n");
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
  Serial.print("G0 Z10\n");
  delay(1000);
}

void z_down(){
  Serial.print("G0 Z-10\n");
  delay(1000);
}


void cam_up(){
  int term = 3;
  for(int i=0; i<100; i++){
    
    //
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(term);
    
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(term);
    
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    delay(term);

    
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(term);  
    
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(term);

    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(term);
    
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    delay(term);
  
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    delay(term);
  
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    delay(term);
  
  }
}

void cam_down(){
  int term = 3;
  for(int i=0; i<100; i++){
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    delay(term);
    
    digitalWrite(7,HIGH);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    delay(term);
  
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    delay(term);
    
    digitalWrite(7,LOW);
    digitalWrite(6,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(term);
  
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    delay(term);
  
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,HIGH);
    delay(term);
    
    digitalWrite(7,LOW);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(term);
    
    digitalWrite(7,HIGH);
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    delay(term);
  }
}

void setup() {
  // put your setup code here, to run once:
  pinMode(9, OUTPUT);
  
  pinMode(7, OUTPUT);       // Motor A 방향설정1

  pinMode(6, OUTPUT);       // Motor A 방향설정2

  pinMode(5, OUTPUT);       // Motor B 방향설정1

  pinMode(4, OUTPUT);       // Motor B 방향설정2

  Serial.begin(115200);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=0;i<4;i++){
    cam_capture();
    delay(1000);
    x_up();
    
  }
  y_up();
  delay(1000);
  for(int j=0;j<4;j++){
    cam_capture();
    delay(1000);
    x_down();
    
  }
  y_down();
  delay(1000);

  z_up();
  delay(1000);
  z_down();
  delay(1000);
  
  cam_up();
  delay(1000);
  cam_down();
  delay(1000);
}

