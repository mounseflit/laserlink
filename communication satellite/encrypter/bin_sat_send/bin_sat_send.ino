int pin=2;
int vitesse = 10; ////televerse speed///ideal=10
int v= vitesse*10; 
       
   
int checkcnx()
{
    digitalWrite(pin, HIGH);
    digitalWrite(4, HIGH);       
    delay(v*5);  
    digitalWrite(pin, LOW);
    digitalWrite(4, LOW);
    return 1;
}


void encrypter(char c)
{
  
  switch (c) {
     
     
    case '1': 
    digitalWrite(pin, HIGH);
    digitalWrite(4, HIGH);       
    delay(v*3);  
    digitalWrite(pin, LOW);
    digitalWrite(4, LOW);
    break;
    
    case '0': 
    digitalWrite(pin, LOW);
    digitalWrite(4, LOW);      
    delay(v*3);
    break;  

    case '/': 
    digitalWrite(pin, LOW);
    digitalWrite(4, LOW);      
    delay(v*1);
    break;
        
  }
}


void setup() {                
 
  pinMode(pin, OUTPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600); 
}

int x=0;
int cnx=0;
void loop()
{ 
char c;

if(x==0){
 Serial.println("\n******************************************");
 Serial.println("               code binaire :");
 Serial.println("******************************************");
 x=1;
 
 }

while(Serial.available()){
  if(cnx==0){Serial.print("\nstart :\n");
  cnx=checkcnx();
  }//alert debut
  x=0;
  c=(char)Serial.read() ;
  Serial.print(c);
  encrypter(c);
  encrypter('/');
} 
if(cnx==1){Serial.print("\nfin.\n");
cnx=checkcnx();
}//alert fin
cnx=0;}
