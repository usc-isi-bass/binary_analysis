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

int sushu(int x)
{
	int i,k;
	k=sqrt(x);
	for(i=2;i<=k;i++){
		if(x%i==0)break;}
	if(i>k) return 1;
	else return 0;
}
int main()
{
	int m,i,a,b;
	scanf("%d",&m);
	for(i=1;i<(m+2)/4;i++){
		a=2*i+1;
		b=m-a;
		if(sushu(a)==1){
			if(sushu(b)==1)printf("%d %d\n",a,b);}
	}
	return 0;
}
