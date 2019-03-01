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
	int n,k;
	scanf("%d%d",&n,&k);
	if(n<k){ printf("n>k not match!\n");return 1;}
	int m=n+k;
    int flag=1;
	int i;
	int x;
	while(1)
	{
         x=m;
         for(i=0;i<n-1;i++)//??n-1?
		 { 
			if(x%n!=k) {flag=0;break;} //???????????k 
			x=x-x/n-k;               
         }       
         if(x%n==k&&flag==1&&x>n) break;//?????????K???????????? 
         flag=1; // ????? 
         m++; //m??1 
    }
    printf("%d\n",m);
    return 0;
}
