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
	int n,i,e=0,k,m=0;
	double x,y;
	char a[500],b[500];
	scanf("%lf",&x);
	scanf("%s",a);
	scanf("%s",b);
	n=strlen(a);
	k=strlen(b);
	for(i=0;i<n;i++){
		if(a[i]==b[i])e++;
	}
    for(i=0;i<n;i++){
		if(a[i]=='A'||a[i]=='T'||a[i]=='C'||a[i]=='G')m++;
		if(b[i]=='A'||b[i]=='T'||b[i]=='C'||b[i]=='G')m++;
	}
    y=e*1.0/n;
	if(n==k&&m==n+k){if(y>=x)printf("yes");
	         else if(y<x)printf("no");
			 }
	else printf("error");
	return 0;
}