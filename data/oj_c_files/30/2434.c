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
	int s=0,n,a[100];
	scanf("%d",&n);
	int i ;
	for(i=0;i<n;i++){
		a[i]=i+1;
		if(a[i]%7==0||a[i]%10==7||(int)a[i]/10==7){
			continue;}
		else
			s+=a[i]*a[i];}
	printf("%d",s);
	return 0;
}
