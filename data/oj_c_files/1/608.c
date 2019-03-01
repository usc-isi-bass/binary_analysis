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

int f(int n,int min){
	int i,result=1;
	if(n<min)return 0;
	for(i=min;i<n;i++)
		if(n%i==0)result+=f(n/i,i);
	return result;
}
void main()
{
	int cases,a;
	scanf("%d",&cases);
	while(cases--){
		scanf("%d",&a);
		printf("%d\n",f(a,2));
	}
}