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
	int n,i,a,b,k=0,j=0,p;
	int sz[100];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a,&b);
		if(a>=90&&a<=140&&b>=60&&b<=90){
			k++;
		}else{ 
			j++;
			sz[j]=k;
			k=0;
		}
	}
	for(p=0;p<j;p++){
		k=sz[p]>k?sz[p]:k;
	}
	printf("%d",k);
	return 0;
}

