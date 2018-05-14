__author__= __sai__





char phn[]="+917288819541";
void setup() {
  Serial.begin(9600);
  delay(200);
  Serial.println("AT");
  delay(1000);
  Serial.print("ATD");
  Serial.println(phn);
  delay(50000);
  Serial.print("ATH");
 
    
}

void loop() {
  // put your main code here, to run repeatedly:

}
