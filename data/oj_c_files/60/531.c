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

void main()
{
	int sushu(int x);
	int n,i,t,k,j=0;
	scanf("%d",&n);
	for(i=2;i<n-1;i++){
		t=sushu(i);
		k=sushu(i+2);
		if(t==1&&k==1)
		{printf("\n%d %d",i,i+2);j++;}
	}
	if(j==0)printf("empty");
}

int sushu(int x)
{
	int i,q=1;
	float p;
	p=sqrt(x);
	for(i=2;i<=p;i++){
	if(x%i==0){q=0;break;}
	}
	return(q);
}