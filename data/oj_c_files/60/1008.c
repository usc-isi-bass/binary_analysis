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
	int n,i,sum=0;
	int f (int i);
	scanf("%d",&n);
	for (i=1;(i+2)<=n;i++)
	{
		if (f(i)){
			printf("%d %d\n",i,i+2);
			sum++;
		}
	}
	if (sum==0) printf("empty"); 
	return 0;
}

int f (int i){
	int s (int i);
	if (s(i)&&s(i+2))
		return (i);
	else return (0);
}

int s(int n){
	int k,num=0;
	for (k=1;k<=n;k++){
		if (n%k==0) num++;
	}
	if (num==2) return (n);
	else return (0);
}

