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

int reverse(int);
int main()
{

	int i,in[6];
	for(i=0;i<6;i++){
		scanf("%d",&in[i]);
		if(i<5)
			getchar();
		in[i]=reverse(in[i]);
	}	
	for(i=0;i<6;i++){
		printf("%d",in[i]);
		if(i<5)
			printf("\n");
	}
	return 0;
}

int reverse(int n)
{
	int dig,i,ans=0,del;
	dig=(int)log10(abs(n));
	for(i=0;i<=dig;i++){
		del=pow(10,(dig-i));
		ans+=(int)pow(10,i)*(int)(n/del);
		n=n-((int)(n/del)*del);
	}
	if(n<0)
		ans=-ans;
	return(ans);
}