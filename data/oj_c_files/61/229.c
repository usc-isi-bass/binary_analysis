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


int fib(int finput)
{
int i1,i2,temp,i;
i1=1;
i2=1;

if(finput==1||finput==2)
return 1;


for(i=2;i<finput;i++)
{
temp=i1+i2;
i1=i2;
i2=temp;

}
return i2;
}

int main()
{
int number;
int finput,i;
scanf("%d\n",&number);
for(i=0;i<number;i++)
{
scanf("%d\n",&finput);

if(i!=number-1)
{
printf("%d\n",fib(finput));
}
else
{
printf("%d",fib(finput));
}

}

return 0;
}