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
    int a[4],i; 
    int b[4]={0}; 
    for(i=0;i<=3;i++)
    scanf("%d",&a[i]); 
    for(i=0;i<=3;i++)
	{
	 while(a[i]>9)
	{ 
	 b[i]=(b[i]+a[i]-a[i]/10*10)*10; 
          a[i]/=10; 
         } 
    b[i]+=a[i]; 
    printf("%d\n",b[i]);
	}
    return 0;
}
