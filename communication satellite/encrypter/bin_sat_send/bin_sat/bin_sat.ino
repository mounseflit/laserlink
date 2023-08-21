int pin=2;
int vitesse = 1; ////televerse speed///ideal=10
int v= vitesse*10; 
       
   


void d1()
{
  digitalWrite(pin, HIGH);    
  delay(v);             
}


void d0()
{
  digitalWrite(pin, LOW);   
  delay(v);               
}






void morse(char c)
{
  
  switch (c) {
     
     
    case '1': 
    d1();
    break;
    
    case '0': 
    d0();
    break;      
  }
}

void setup() {                
 
  pinMode(pin, OUTPUT);
 
  Serial.begin(9600); 
}

int x=0;
void loop()
{ 
char c;

if(x==0){
 Serial.println("\n******************************************");
 Serial.println("               write text :");
 Serial.println("******************************************");
 x=1;
 }
 
while(Serial.available()){
  x=0;
  c=(char)Serial.read() ;
  Serial.print(c);
  morse(c);
  } 
}
