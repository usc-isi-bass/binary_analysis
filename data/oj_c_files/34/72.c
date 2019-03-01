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

main(){
int a;
int b;
int c;
int d;
scanf("%d",&a);
b=a%2;

if(b==0)
{
while(b==0)
{
c=a/2;
b=c%2;
printf("%d/2=%d\n",a,c);
a=c;
}
if(a==1)
printf("End");
else{
while((b!=0)&&(a!=1))
{

d=a*3+1;
printf("%d*3+1=%d\n",a,d);
a=d;
b=a%2;
while(b==0)
{
c=a/2;
b=c%2;
printf("%d/2=%d\n",a,c);
a=c;
}

}

printf("End");
}
}


else
{
if(a==1)
printf("End");
else
{
while((b!=0)&&(a!=1))
{

d=a*3+1;
printf("%d*3+1=%d\n",a,d);
a=d;
b=a%2;
while(b==0)
{
c=a/2;
b=c%2;
printf("%d/2=%d\n",a,c);
a=c;
}

}

printf("End");
}

}
}
