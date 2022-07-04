#define Data0 2
#define Data1 3
#define Data2 4
#define Data3 5
#define BL 6

void segment_data_raw(int data3,int data2,int data1,int data0)
{
  digitalWrite(BL,LOW);
  digitalWrite(Data0,data0);
  digitalWrite(Data1,data1);
  digitalWrite(Data2,data2);
  digitalWrite(Data3,data3);
  delay(1);
  digitalWrite(BL,HIGH);
  
}

void number_to_seg(int number)
{
  digitalWrite(BL,LOW);
  switch(number)
  {
    case 0:digitalWrite(Data0,LOW);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,LOW);
           break;
    case 1:digitalWrite(Data0,HIGH);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,LOW);
           break;
    case 2:digitalWrite(Data0,LOW);
           digitalWrite(Data1,HIGH);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,LOW);
           break;
    case 3:digitalWrite(Data0,HIGH);
           digitalWrite(Data1,HIGH);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,LOW);
           break;
    case 4:digitalWrite(Data0,LOW);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,HIGH);
           digitalWrite(Data3,LOW);
           break;
    case 5:digitalWrite(Data0,HIGH);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,HIGH);
           digitalWrite(Data3,LOW);
           break;
    case 6:digitalWrite(Data0,LOW);
           digitalWrite(Data1,HIGH);
           digitalWrite(Data2,HIGH);
           digitalWrite(Data3,LOW);
           break;
    case 7:digitalWrite(Data0,HIGH);
           digitalWrite(Data1,HIGH);
           digitalWrite(Data2,HIGH);
           digitalWrite(Data3,LOW);
           break;
    case 8:digitalWrite(Data0,LOW);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,HIGH);
           break;
    case 9:digitalWrite(Data0,HIGH);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,HIGH);
           break;
    default:digitalWrite(Data0,LOW);
           digitalWrite(Data1,LOW);
           digitalWrite(Data2,LOW);
           digitalWrite(Data3,LOW);
           break;
  }
  delay(1);
  digitalWrite(BL,HIGH);
}

void setup() {
  // put your setup code here, to run once:
 pinMode(Data0,OUTPUT);
 pinMode(Data1,OUTPUT);
 pinMode(Data2,OUTPUT);
 pinMode(Data3,OUTPUT);
 pinMode(BL,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 //segment_data_raw(1,0,0,1);
 for(int i=0;i<=9;i++)
 {
  number_to_seg(i);
  delay(1000);
 }
}
