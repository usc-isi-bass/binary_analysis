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


void main()
{
	int i,j,k,n,m,sum=0,max,min,a[100][100]={0};
	char s[81]={""};
	scanf("%d %d",&m,&n);
    for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&a[i][j]);
for(k=0;k<m+n-1;k++)
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			if(i+j==k) printf("%d\n",a[i][j]);

}
