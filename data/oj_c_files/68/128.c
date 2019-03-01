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
	int n,i,j;
	char isprime[maxn+1]={0,0};
	scanf("%d",&n);
	for(i=2;i<=n;i++)
	{
		isprime[i]=1;
	}
	for(i=2;i<=n;i++)
	{
		if(isprime[i]){
			for(j=i+i;j<=n;j+=i){
				isprime[j]=0;}
		}
	}
	for(i=6;i<=n;i+=2){
			for(j=2;j<=i/2;j++){
				if(isprime[j]&&isprime[i-j]){
					printf("%d=%d+%d\n",i,j,i-j);
					break;}
			}
	}
	return 0;
}