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
	int n,i,sz[100][100],j;
	double a,b;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<2;j++){
			scanf("%d",&sz[i][j]);}}
    a=1.0*sz[0][1]/sz[0][0];
	for(i=1;i<n;i++){
	b=1.0*sz[i][1]/sz[i][0]-a;
	if(b>0.05){printf("better\n");}
	if(b<-0.05){printf("worse\n");}
	if(b<0.05&&b>-0.05){printf("same\n");}}
return 0;
}