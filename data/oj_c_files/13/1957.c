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
	int n,i,j,k,a[20000],b=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	printf("%d",a[0]);
	for(j=1;j<n;j++){
		for(k=0;k<=j;k++){
	if(a[k]!=a[j])b++;
		}
		if(b==j)printf(" %d",a[j]);
		b=0;
	}
	return 0;

}