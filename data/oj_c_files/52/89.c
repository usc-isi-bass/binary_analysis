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

int main(int argc, char* argv[])
{
	int m,n,i,j,p[100],t;
	scanf("%d%d",&n,&m);
	for (i=0;i<n;i++){
		scanf("%d",&p[i]);}
	for (i=n-1;i>=0;i--){
       p[i+m]=p[i];
	   }
	for (j=n-1+m;j>=n;j--){
		p[j-n]=p[j];
	}
	printf("%d",p[0]);
	for (t=1;t<n;t++){
		printf(" %d",p[t]);
	}
	return 0;
}
