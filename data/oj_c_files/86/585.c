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

int main(){
	int n,m,i,j;
	scanf("%d",&n);
	int a[n],b[N];
	b[0]=0;
	for(i=0;i<n;i++){
		scanf("%d",&m);
		for(j=0;j<m;j++)
			scanf("%d",&b[j]);
		for(j=0;j<m;j++){
			b[j]+=(j+1)*3;
			if(b[j]>60)
				break;
		}
		if(j==m-1&&b[j]<=60)
			a[i]=b[j]-j*3;
		else if(b[j]>60&&b[j]<=63)
			a[i]=b[j]-(j+1)*3;
		else
			a[i]=60-j*3;
	}
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
	return 0;
}
