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
    int i,j,a[13]={0},w;
    a[1]=13;a[2]=31+a[1];a[3]=28+a[2];a[4]=31+a[3];a[5]=30+a[4];
    a[6]=31+a[5];a[7]=30+a[6];a[8]=31+a[7];a[9]=31+a[8];a[10]=30+a[9];
    a[11]=31+a[10];a[12]=30+a[11];
    scanf("%d",&w);
    for(i=1;i<13;i++)
    {
       if((a[i]+w)%7==6)
       {printf("%d\n",i);}
    }

    
}