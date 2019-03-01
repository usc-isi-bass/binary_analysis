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
   int y,m,d,i;
   scanf("%d %d %d",&y,&m,&d);
   int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
   if(y%100==0&&y%400==0)
     n[1]=29;
   if(y%100!=0&&y&4==0)
     n[1]=29;
   int sum=0;
   for(i=0;i<m-1;i++)
     sum=sum+n[i];
   printf("%d\n",sum+d);
   getchar();
   getchar();  
}
