int pin=2;
int vitesse = 10; ////televerse speed///ideal=10
int dtl = vitesse*10;     
int dhl = dtl * 3;    
int p = dtl;  
int sp = dhl; 
int pp= dtl * 2;   


void dt()
{
  digitalWrite(pin, HIGH);    
  delay(dtl);             
}


void dh()
{
  digitalWrite(pin, HIGH);   
  delay(dhl);               
}



void Off(int t)
{
  digitalWrite(pin, LOW); 
  delay(t);            
}


void morse(char c)
{
  
  switch (c) {
     
     
    case '1': 
    dt();
   Off(p);
    dh();
    Off(p);
    dh();
   Off(p);
    dh();
   Off(p);
    dh();
    Off(p);
    break;
    case '2': 
    dt();
   Off(p);
    dt();
    Off(p);
    dh();
   Off(p);
    dh();
   Off(p);
    dh();
    Off(p);
    break;
    case '3': 
    dt();
   Off(p);
    dt();
    Off(p);
    dt();
   Off(p);
    dh();
   Off(p);
    dh();
    Off(p);
    break;
    case '4': 
    dt();
   Off(p);
    dt();
    Off(p);
    dt();
   Off(p);
    dt();
   Off(p);
    dh();
    Off(p);
    break;
    case '5': 
    dt();
   Off(p);
    dt();
    Off(p);
    dt();
   Off(p);
    dt();
   Off(p);
    dt();
    Off(p);
    break;
    case '6': 
    dh();
   Off(p);
    dt();
    Off(p);
    dt();
   Off(p);
    dt();
   Off(p);
    dt();
    Off(p);
    break;
    case '7': 
    dh();
   Off(p);
    dh();
    Off(p);
    dt();
   Off(p);
    dt();
   Off(p);
    dt();
    Off(p);
    break;
    case '8': 
    dh();
   Off(p);
    dh();
    Off(p);
    dh();
   Off(p);
    dt();
   Off(p);
    dt();
    Off(p);
    break;
    case '9': 
   dh();
   Off(p);
    dh();
    Off(p);
    dh();
   Off(p);
    dh();
   Off(p);
    dt();
    Off(p);
    break;
    case '0': 
    dh();
   Off(p);
    dh();
    Off(p);
    dh();
   Off(p);
    dh();
   Off(p);
    dh();
    Off(p);
    break;
    //////////////////
    case 'a': 
    dt();
   Off(p);
    dh();
    Off(p);
    break;
    case 'b':
    dh();
   Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    break;
    case 'c':
      dh();
   Off(p);
    dt();
    Off(p);
    dh();
  Off(p);
    dt();
    Off(p);
    break;
    case 'd':
    dh();
    Off(p);
    dh();
    Off(p);
    dt();
    Off(p);
    break;
    case 'e':
    dt();
    Off(p);
    break;
    case 'f':
     dt();
   Off(p);
    dt();
   Off(p);
    dh();
   Off(p);
    dt();
   Off(p);
    break;
    case 'g':
    dh();
   Off(p);
    dh();
   Off(p);
    dt();
   Off(p);
    break;
    case 'h':
     dt();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    break;
    case 'i':
      dt();
    Off(p);
    dt();
    Off(p);
    break;
    case 'j':
      dt();
    Off(p);
    dh();
    Off(p);
    dh();
    Off(p);
    dh();
    Off(p);
    break;
    case 'k':
    dh();
    Off(p);
    dt();
    Off(p);
    dh();
    Off(p);
    break;
    case 'l':
      dt();
    Off(p);
    dh();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    break;
      case 'm':
      dh();
    Off(p);
    dh();
    Off(p);
    break;
    case 'n':
      dh();
    Off(p);
    dt();
    Off(p);
    break;
    case 'o':
      dh();
    Off(p);
    dh();
    Off(p);
    dh();
    Off(p);
    break;
    case 'p':
      dt();
    Off(p);
    dh();
   Off(p);
    dh();
    Off(p);
    dt();
    Off(p);
    break;
    case 'q':
      dh();
    Off(p);
    dh();
    Off(p);
    dt();
    Off(p);
    dh();
   Off(p);
    break;
    case 'r':
      dt();
    Off(p);
    dh();
    Off(p);
    dt();
    Off(p);
    break;
    case 's':
     dt();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    break;
    case 't':
      dh();
    Off(p);
    break;
    case 'u':
      dt();
    Off(p);
    dt();
    Off(p);
    dh();
    Off(p);
    break;
    case 'v':
      dt();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    dh();
    Off(p);
    break;
    case 'w':
      dt();
    Off(p);
    dh();
    Off(p);
    dh();
    Off(p);
    break;
    case 'x':
     dh();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);;
    dh();
    Off(p);
    break;
    case 'y':
    dh();
    Off(p);
    dt();
    Off(p);
    dh();
    Off(p);
    dh();
    Off(p);
    break;
    case 'z':
     dh();
    Off(p);
    dh();
    Off(p);
    dt();
    Off(p);
    dt();
    Off(p);
    break;
    case ' ': 
    Off(sp);
    break;
    default: 
    Off(sp);      
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
  c = toLowerCase(c);
  morse(c);
  delay(pp);
  } 
}
