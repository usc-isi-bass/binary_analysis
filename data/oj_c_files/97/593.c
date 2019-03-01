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

int main(){
   int num,a,b,c,d,e,f;
   int sz[6]={100,50,20,10,5,1};
   
   scanf("%d",&num);
   a=num/sz[0];
   num=num-a*100;
	   b=num/sz[1];
	   num=num-b*50;
	   c=num/sz[2];
	   num=num-c*20;
	   d=num/sz[3];
	   num=num-d*10;
	   e=num/sz[4];
	   num=num-e*5;
	   f=num;
	   printf("%d\n%d\n%d\n%d\n%d\n%d\n",a,b,c,d,e,f);
	return 0;
}