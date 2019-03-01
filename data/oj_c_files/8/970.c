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

int work(int now,int x)
{
	int i,j,swap;
	int a[1002];
	for (i=1;i<=x;i++){
		scanf("%d",&a[i]);
	}
	for (i=1;i<=x;i++){
		for(j=i+1;j<=x;j++){
			if (a[i]>a[j]) {
				swap=a[i];a[i]=a[j];a[j]=swap;
			}
		}
	}
	if (now==2) printf(" ");
	printf("%d",a[1]);
	for (i=2;i<=x;i++){
		printf(" %d",a[i]);
	}
	return(0);
}
int main()
{ 
	int n,m;
	scanf("%d%d",&n,&m);
    work(1,n);
	work(2,m);
	return(0);
}
