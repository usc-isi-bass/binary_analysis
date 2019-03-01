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
	char b[200][20]={0};
	int i=0,l,n,p,q,max,min,c[200]={0},k;
	scanf("%d",&k);while(scanf("%s",b[i])!=EOF){
	l=strlen(b[i]);
	if(b[i][l-1]==',')b[i][--l]=0;
	c[i]=l;i++;}n=i-1;
	p=q=0;max=min=c[0];
	for(i=1;i<=n;i++)
		if(c[i]>max){max=c[i];p=i;}
		else if(c[i]<min){min=c[i];q=i;}
	puts(b[p]);
	puts(b[q]);
}
