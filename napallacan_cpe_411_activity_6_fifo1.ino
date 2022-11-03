// Franz Mark Napallacan
// BS CpE 4 - A
// CPE 411 - Activity 6
// FIFO

int led1 = 13;
int led2 = 12;
int led3 = 11;
int led4 = 10;
int led5 = 9;
int led6 = 8;

void setup()
{
  Serial.begin(9600);
   pinMode(led1, OUTPUT);
   pinMode(led2, OUTPUT);
   pinMode(led3, OUTPUT);
   pinMode(led4, OUTPUT);
   pinMode(led5, OUTPUT);
   pinMode(led6, OUTPUT);
}

void loop()
{ 
  //Input burst time for each LED in milliseconds
   
  Serial.println("LED_1: "); 
  while (Serial.available() == 0) {	
  }
  int led1= Serial.parseInt();
  
  Serial.println("LED_2: ");
   while (Serial.available() == 0) { 
  }
  int led2= Serial.parseInt();
  
   Serial.println("LED_3: ");
   while (Serial.available() == 0) { 
   }
  int led3 = Serial.parseInt();
  
   Serial.println("LED_4: ");
   while (Serial.available() == 0) { 
  }
  int led4 = Serial.parseInt();
   Serial.println("LED_5: ");
   while (Serial.available() == 0) { 
  }
  int led5= Serial.parseInt();
  
   Serial.println("LED_6: ");
  while (Serial.available() == 0) {
  }
  int led6= Serial.parseInt();
  

  // Executes the LED lights based on the input's burst time
  
  Serial.println("FIFO STARTED");
  
  digitalWrite(13, HIGH);
  delay(led1); 
  digitalWrite(13, LOW);
  
  digitalWrite(12, HIGH);
  delay(led2); 
  digitalWrite(12, LOW);
  
  digitalWrite(11, HIGH);
  delay(led3); 
  digitalWrite(11, LOW);
  
  digitalWrite(10, HIGH);
  delay(led4); 
  digitalWrite(10, LOW);
  
  digitalWrite(9, HIGH);
  delay(led5); 
  digitalWrite(9, LOW);
  
  digitalWrite(8, HIGH);
  delay(led6); 
  digitalWrite(8, LOW);
  

  Serial.println("FIFO FINISHED");
}
