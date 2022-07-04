
/*---Refer the Video and check the process---*/

#define SER 2 // PIN NUMBER 14
#define SRCLK 3 // PIN NUMBER 11
#define SRCLR 4 // PIN NUMBER 10
#define RCLK 5 // PIN NUMBER 12
void shift_clock()
{
  digitalWrite(SRCLK,HIGH);
  delay(1);
  digitalWrite(SRCLK,LOW);
  delay(1);
}
void shift_strobe()
{
  digitalWrite(RCLK,HIGH);
  delay(1);
  digitalWrite(RCLK,LOW);
  delay(1);
}
void shift_data(int d0)
{
  digitalWrite(SER,d0);
}
void shift_display(int d0,int d1,int d2,int d3,int d4,int d5,int d6,int d7)
{
  shift_data(d0);// Last Bit
  shift_clock();// SRCLK
  shift_data(d1);
  shift_clock();// SRCLK
  shift_data(d2);
  shift_clock();// SRCLK
  shift_data(d3);
  shift_clock();// SRCLK
  shift_data(d4);
  shift_clock();// SRCLK
  shift_data(d5);
  shift_clock();// SRCLK
  shift_data(d6);
  shift_clock();// SRCLK
  shift_data(d7);// First Bit.
  shift_clock();// SRCLK
  shift_strobe(); // RCLK
}
void setup() {
  // put your setup code here, to run once:
 pinMode(SER,OUTPUT);
 pinMode(SRCLK,OUTPUT);
 pinMode(SRCLR,OUTPUT);
 pinMode(RCLK,OUTPUT);
 digitalWrite(SRCLR,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  shift_display(0,0,0,0,1,0,1,0);
  delay(1000);
  shift_display(0,0,0,0,0,1,0,1);
  delay(1000);
}
