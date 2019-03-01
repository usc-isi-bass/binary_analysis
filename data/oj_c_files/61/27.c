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
int n;
cin>>n;
while(n--)
{
int a=0,b=1,c,num,re=0;
cin>>num;
num--;
while(num--)
{
c=b;
b=a+b;
a=c;
}
cout<<b<<endl;
}
return 0;
}