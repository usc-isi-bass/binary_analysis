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

int main (){
int a,b,c,d,e,f,sum;
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
while(a>=1&&d<=11&&b>=0&&c>=0&&e>=0&&f>=0&&b<=59&&c<=59&&e<=59&&f<=59){
	
sum=(12+d)*3600+60*e+f-3600*a-60*b-c;
printf("%d\n",sum);
scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
}
return 0;}