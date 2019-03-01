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
 int a;
 scanf("%d",&a);
 int sum=0;
 int i=0;
 while(i<=a)
 {
	 if((i%7==0||i%10==7||i/10==7)==0)
	 sum=sum+i*i;
	 i++;
 }
 printf("%d",sum);
 return 0;
}