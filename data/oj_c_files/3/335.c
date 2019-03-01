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

int a[1000];
int main ()
{
	int n,k;
	int i,j;
	int m;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if((a[i]+a[j])==k){ 
				m=k;
			    break;
			}
			else if((a[i]+a[j])!=k) { 
			continue;
			}
	}
	}
	if(m==k)  printf("yes");
	else if(m!=k) printf("no");
	return 0;
}
