#include <SoftPWM.h>

int a=0;
int zaman = 150;

void setup() {
  SoftPWMBegin();
  SoftPWMSet(A0, 0);
  SoftPWMSet(A1, 0);
  SoftPWMSet(A2, 0);
  SoftPWMSet(A3, 0);
  SoftPWMSet(A4, 0);
  SoftPWMSet(A5, 0);
  
  SoftPWMSet(11, 0);
  SoftPWMSet(10, 0);
  SoftPWMSet(9, 0);
  SoftPWMSet(6, 0);
  SoftPWMSet(5, 0);
  SoftPWMSet(3, 0);
  
  SoftPWMSetFadeTime(A0, 1000, 1000); 
  SoftPWMSetFadeTime(A1, 1000, 1000); 
  SoftPWMSetFadeTime(A2, 1000, 1000); 
  SoftPWMSetFadeTime(A3, 1000, 1000); 
  SoftPWMSetFadeTime(A4, 1000, 1000); 
  SoftPWMSetFadeTime(A5, 1000, 1000); 
  
  SoftPWMSetFadeTime(11, 1000, 1000); 
  SoftPWMSetFadeTime(10, 1000, 1000); 
  SoftPWMSetFadeTime(9, 1000, 1000); 
  SoftPWMSetFadeTime(6, 1000,1000); 
  SoftPWMSetFadeTime(5, 1000, 1000); 
  SoftPWMSetFadeTime(3, 1000, 1000); 
}

void loop() {
  SoftPWMSetPercent(A0, 100);
  SoftPWMSetPercent(A1, 100);
  SoftPWMSetPercent(A2, 100);
  SoftPWMSetPercent(A3, 100);
  SoftPWMSetPercent(A4, 100);
  SoftPWMSetPercent(A5, 100);
  
  SoftPWMSetPercent(11, 100);
  SoftPWMSetPercent(10, 100);
  SoftPWMSetPercent(9, 100);
  SoftPWMSetPercent(6, 100);
  SoftPWMSetPercent(5, 100);
  SoftPWMSetPercent(3, 100);
  delay(4000);
  while(a<3)
  {
    a=a+1;
    
    delay(1200);
    SoftPWMSetPercent(A0, 100);
    SoftPWMSetPercent(A1, 100);
    SoftPWMSetPercent(A2, 100);
    SoftPWMSetPercent(A3, 100);
    SoftPWMSetPercent(A4, 100);
    SoftPWMSetPercent(A5, 100);
    
    SoftPWMSetPercent(11, 100);
    SoftPWMSetPercent(10, 100);
    SoftPWMSetPercent(9, 100);
    SoftPWMSetPercent(6, 100);
    SoftPWMSetPercent(5, 100);
    SoftPWMSetPercent(3, 100);
    delay(1200);
    
    SoftPWMSetPercent(A0, 10);
    SoftPWMSetPercent(A1, 10);
    SoftPWMSetPercent(A2, 10);
    SoftPWMSetPercent(A3, 10);
    SoftPWMSetPercent(A4, 10);
    SoftPWMSetPercent(A5, 10);
    
    SoftPWMSetPercent(11, 10);
    SoftPWMSetPercent(10, 10);
    SoftPWMSetPercent(9, 10);
    SoftPWMSetPercent(6, 10);
    SoftPWMSetPercent(5, 10);
    SoftPWMSetPercent(3, 10);
    
    if(a==3){
      break; 
    }
  }
  a=0;
}
