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
	int SZ[100],ZS[100];
	int n,m=0,i;
	scanf("%d\n",&n);
	for(i=0;i<n-1;i++)
	{
		scanf("%d ",&(SZ[i]));
	}
	scanf("%d",&(SZ[n-1]));
	while(n>0){
		ZS[m]=SZ[n-1];
		n--;
		m++;
	}
	for(i=0;i<m-1;i++)
		printf("%d ",ZS[i]);
	printf("%d",ZS[m-1]);
	return 0;
}