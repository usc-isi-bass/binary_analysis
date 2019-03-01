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
  int a,b,c,d,e,f;
  int i,time=0;
  for(i=0;i<10000;i++){
     scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
     time=time+(d+12-a)*60*60;
	 time=time+(e-b)*60;
	 time=time+f-c;
	 
	 if(time==12*60*60){
	 break;
	 }
	 if(time!=0){
	 printf("%d\n",time);
	 time=0;
	 }
  }
    return 0;
}