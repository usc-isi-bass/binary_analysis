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
	int qiuyu(int n,int k,int m);
	int n,k,i,m;
	scanf("%d%d",&n,&k);
	for(m=1;;m++){
		i=qiuyu(n,k,m);
		if(i==n){
			printf("%d\n",m);
			break;
		}
	}
}
int qiuyu(int n,int k,int m)
{
	int i,l;
	l=m;
	for(i=0;i<n;i++){
		if((l%n==k)&&(l/n>0))
			l=l-k-(l-k)/n;
		else
			break;
	}
	return(i);
}