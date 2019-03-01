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


int su(int x);

int main(){
	int m,n,i;
	scanf("%d",&m);
	for(i=3;i<=m/2;i++)
	{
		if(su(i)==1&&su(m-i)==1)
			printf("%d %d\n",i,m-i);
	}
	return 0;
}

int su(int x){
	int j;
	for(j=2;j<=x/2;j++)
	{
		if(x%j==0)
			return 0;
	}
	return 1;
}