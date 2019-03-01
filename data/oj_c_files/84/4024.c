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
	int n,ma,mi,x,y;
	int i=1;
	scanf("%d",&y);
	while(i<=y)
	{
		scanf("%d",&n);
		if(i==1){
			ma=n;
		}
		else if(i==2){
			if(n>=ma){
			x=ma;
			ma=n;
			mi=x;
			}else{
				mi=n;
				}
		}
		else if(n>=ma){
			x=ma;
			ma=n;
			mi=x;
		}else if(n>=mi){
			mi=n;
		}
	i++;
	}
	printf("%d\n%d\n",ma,mi);
	return 0;
}