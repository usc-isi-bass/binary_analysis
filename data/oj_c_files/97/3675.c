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

void main()
{
int i=0,j=0,pieces[10],result[10];
float value,flag[10],mianzhi[10]={100,50,20,10,5,1};
scanf("%f",&value);
while(value>=mianzhi[i],i<10)
{
pieces[i]=value/mianzhi[i];
value=value-pieces[i]*mianzhi[i];
i++;
}
for(i=0;i<10;i++)
{
if(pieces[i]>=0) 
{
result[j]=pieces[i];
flag[j]=mianzhi[i];
j++;
}
}
for(i=0;i<j;i++)
{
printf("%d\n",result[i]);
}
}

