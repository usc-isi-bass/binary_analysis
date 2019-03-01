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
int i,j,n=0;
char chang[50],duan[50];
scanf("%s %s",duan,chang);
for(i=0;i<50;i++)
{
if(duan[0]==chang[i])
{
for(j=0;duan[j]!='\0';j++)
{
if(duan[j]!=chang[j+i])
n=1;
}
if(n==0)
{
printf("%d",i);
break;
}
}
}
}