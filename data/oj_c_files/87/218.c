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

int main(){
	int a,b,c,d,e,f;
	int sum=0,tmp;
	int r;
	int m,n,p;
	do{
	    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
		if(a!=0)
		{
		 m=(d+12-a)*3600;
		  n=(e-b)*60;
		  p=f-c;
		tmp=m+n+p;
		printf("%d\n",tmp);
		}
		if(a==0)
		{
			continue;
		}
	}while(a!=0);
	return 0;
}