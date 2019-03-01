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
	int n,i,a,b,max=0,sec;
	int number[1000];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&number[i]);
		if(number[i]>max){
			max=number[i];
		}
	}
		a=max;
		sec=max;
		for(i=0;i<n;i++){
			if((a-number[i])<sec&&(a-number[i]>0)){
					sec=a-number[i];
			}
		}
	
		b=a-sec;
		printf("%d\n",a);
		printf("%d\n",b);
		return 0;
	}