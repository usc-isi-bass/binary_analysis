#include <ctype.h>
#include <errno.h>
#include <float.h>
#include <iso646.h>
#include <limits.h>
#include <locale.h>
#include <math.h>
#include <setjmp.h>
#include <signal.h>
#include <stdarg.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main()
{
int i,n,shou[100],shu[100],time,m=0,t=0;
scanf("%d",&n);
scanf("%d %d",&shou[0],&shu[0]);
if((shou[0]>=90)&&(shou[0]<=140)&&(shu[0]>=60)&&(shu[0]<=90)){
  m=1;
  t=1;
  }
for(i=1;i<n;i++)
{
 scanf("%d %d",&shou[i],&shu[i]);
 if((shou[i]>=90)&&(shou[i]<=140)&&(shu[i]>=60)&&(shu[i]<=90)){
   time=1;
  }
  else {
  time=0;
  }
 if((shou[i-1]>=90)&&(shou[i-1]<=140)&&(shu[i-1]>=60)&&(shu[i-1]<=90)){
    if(time==1){
    m=m+1;
     if(m>t){
     t=m;
     }
    }
    else {
     m=0;
    }   
  }
  if((time==1)&&((shou[i-1]<90)||(shou[i-1]>140)||(shu[i-1]<60)||(shu[i-1]>90))){
  m=1;
  }
}
  printf("%d",t);
  return 0;
}
