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
    int y,m,d,i,sum;
    int a[12]={31,0,31,30,31,30,31,31,30,31,30,31}; 
    scanf("%d %d %d",&y,&m,&d);
    if((y%4==0&&y%100!=0 )|| y%400 == 0)
    a[1]=29;
    else
    a[1]=28;
    sum=0;
    for(i=0;i<m;i++)
      sum = sum+a[i];
      sum = sum-a[i-1]+d;
    printf("%d",sum);
    getchar();
    getchar();
	return 0;
}
    
     
