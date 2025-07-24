/*
1.8 degree with 1/8 res
200 pulses  360 8 
400 pulses  360 4 
800 pulses  360 2 
800 pulses  360 2 

*/
int EN_PIN = 4;
int STP_PIN = 3;
int DIR_PIN = 2;

int i;
// the setup function runs once when you press reset or power the board
void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  // pinMode(LED_BUILTIN, OUTPUT);
    
  pinMode(EN_PIN, OUTPUT);
  pinMode(STP_PIN, OUTPUT);
  pinMode(DIR_PIN, OUTPUT);

  digitalWrite(EN_PIN, HIGH);
  digitalWrite(STP_PIN, HIGH);
  digitalWrite(DIR_PIN, HIGH);
  
  delay(1000);                  //延时1000毫秒
}

// the loop function runs over and over again forever
void loop() {
/*脉冲频率越高，电机转速越快
 *脉冲频率通过延时函数delayMicroseconds()改变*/
    digitalWrite(EN_PIN, LOW);          //使能信号输出低电平，电机锁轴
    digitalWrite(DIR_PIN, LOW);         //方向信号输出低电平，电机正（反）向转动
    for(i=0;i<200;i++)                 //Pulse number
    {
      digitalWrite(STP_PIN, HIGH);      //脉冲信号输出高电平 
      delayMicroseconds(100);           //延时100微秒
      digitalWrite(STP_PIN, LOW);       //脉冲信号输出低电平 
      delayMicroseconds(100);           //延时100微秒
    }
    //digitalWrite(EN_PIN, HIGH);         //使能信号输出高电平，电机松轴
    delay(1000);                        //延时1000毫秒

/*输出脉冲信号，控制电机正(反)转1圈(16细分)a
 *脉冲频率越高，电机转速越k
 *脉冲频率通过延时函数delayMicroseconds()改变*/
//    digitalWrite(EN_PIN, LOW);          //使能信号输出低电平，电机锁轴
//    digitalWrite(DIR_PIN, HIGH);        //方向信号输出高电平，电机反（正）向转动
//    for(i=0;i<3200;i++)                 //输出3200个脉冲信号
//    {
//      digitalWrite(STP_PIN, HIGH);      //脉冲信号输出高电平 
//      delayMicroseconds(100);           //延时100微秒
//      digitalWrite(STP_PIN, LOW);       //脉冲信号输出低电平 
//      delayMicroseconds(100);           //延时100微秒
//    }
//    digitalWrite(EN_PIN, HIGH);         //使能信号输出高电平，电机松轴
//    delay(1000);                        //延时1000毫秒
}

