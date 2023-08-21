void setup() {

  Serial.begin(9600);
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(A0, INPUT);
  
}

void loop() {

  int r=analogRead(A0);
  int i=0;
  int j=0;
  int x=0;
  int p=0;
  int n=0;
  char *s;

  Serial.println(r);
  
    while(r>800){
    r = analogRead(A0);
    i++;//light time
    x=1;//did read light
    j=0;//init blank time
    digitalWrite(13, HIGH);
    digitalWrite(12, HIGH);              
 
    }

   while(r<700 && x==1){
    r = analogRead(A0);
    j++;// blank time
    i=0;//init light time
    digitalWrite(13, LOW);
    digitalWrite(12, LOW);  
    }

   if(x==1){x=0;}
   


  if(i>500 && i<1500) 
  {
  n++;
  s=malloc(n*sizeof(char));
  s[p]='1';
  Serial.print(".");
  p++;}
  

  if(j>500 && j<1500) 
  {
  n++;
  s=malloc(n*sizeof(char));
  s[p]='0';
  Serial.print("/");
  p++;}

   
}
