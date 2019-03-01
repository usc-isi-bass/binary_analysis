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
	int i,a[300],n=-2,p=-2;
	for(i=0;i<=299;i++)
		a[i]=-100;
	scanf("%d",&a[0]);
	for(i=1;i<=299;i++)
	scanf(",%d",&a[i]);
	for(i=0;i<=299;i++){
		if(a[i]>n){
			p=n;
			n=a[i];}
		if(a[i]>p&&a[i]<n)
			p=a[i];
	}
	if(p==-2)
		printf("No\n");
	else
		printf("%d\n",p);
	return 0;
}