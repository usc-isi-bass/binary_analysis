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

int reverse(int num)
{
int c[6];
int i,j,k;
int w=0;
for(i=1;i<=6;i++)
{
c[i]=0;
c[i]=num%10;
num=num-c[i];
if(num==0)
break;
num=num/10;
}
for(j=1;j<=i;j++)
{
for(k=1;k<=(i-j);k++)
c[j]=c[j]*10;
}
for(k=1;k<=i;k++)
w=w+c[k];
return(w);
}

int main()
{
    int n,m,j;
    for(j=1;j<=6;j++)
    { 
    scanf("%d",&n);
    m = reverse(n);
    printf("%d\n",m);
    }
    getchar();
    getchar();
    return 0;
}