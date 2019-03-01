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
int a[100],b,c,i,j,temp;
scanf("%d%d",&b,&c);
for(i=0;i<b;i++)
scanf("%d",&a[i]);
for(i=0;i<b-c;i++)
{
temp=a[0];
for(j=0;j<b-1;j++)
a[j]=a[j+1];
a[j]=temp;
}
cout<<a[0];
for(i=1;i<b;i++)
cout<<" "<<a[i];
printf("\n");
return 0;
}