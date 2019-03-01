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
	int n,a[1000][1000];
	int i,j,m=0,i1,i2,j1,j2;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
			if(a[i][j]==0) m++,i2=i,j2=j;
			if(m==1) i1=i,j1=j;
		}
	}
	int num=(i2-i1-1)*(j2-j1-1);
	printf("%d",num);
	return 0;
}

	
	