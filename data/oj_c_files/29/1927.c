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
	int m,n[100],i,p;
	float a,s[100],b;
	scanf("%d",&m);
	for(i=1;i<m;i++){
		scanf("%d\n",&n[i]);}
	scanf("%d",&n[m]);
	
	for(i=1;i<=m;i++){
		if(n[i]==0)printf("0");
		else 
			for(p=1,a=2.0,b=0;p<=n[i];p++){
				b=b+a;a=1+1.0/a;
			s[i]=b;}
	}
    for(i=1;i<=m;i++){printf("%.3f\n",s[i]);}}
