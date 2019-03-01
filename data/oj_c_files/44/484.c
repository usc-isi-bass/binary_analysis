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

int fan(int a)
{int i,j;
int k;
int b=0;
int c[10];
if(a<0)
{k=1;
a=-a;}
else if(a==0)
{return 0;}
else
{k=0;}
for(i=0;i<10;i++)
c[i]='\0';
for(i=0;i<10;i++)
{c[i]=a%10;
a=a/10;
if(a==0)
break;
                 }
for(j=0;j<=i;j++)
{b=b*10;
b=b+c[j];
}
if(k==0)
return b;
else
return -b;

}

int main()
{int i,j;
int a,b;
for(i=0;i<6;i++)
{cin>>a;
b=fan(a);
cout<<b<<endl;}
return 0;
    }