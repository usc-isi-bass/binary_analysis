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
	int a[100];
	int n,first=0,second=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(first<a[i]){
			first=a[i];
		}
		else
		{
			first=first;
		}
	}
	for(i=0;i<n;i++){
		if(second<a[i]&&a[i]!=first){
			second=a[i];
		}
		else
		{
			second=second;
		}
	}
	printf("%d\n",first);
	printf("%d\n",second);
	return 0;
}
