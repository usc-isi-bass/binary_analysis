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

int main ()
{
	int n,i,max;
	int k=0;
	int a[N],b[N],c[N];
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d%d",&a[i],&b[i]);
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90){
			k++;
			c[i]=k;
		} else {
			c[i]=k=0;
		}
	}
		max=c[0];
		for(i=0;i<n;i++){
			if(max<c[i]){
				max=c[i];
			}
		}
		printf("%d",max);
		return 0;
}
