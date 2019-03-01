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
	
	int i,j,a,c,e,x,b,d,h;
    int k,n;
	int m[1000],t;
	scanf("%d%d",&n,&x);
	for(i=1;i<=n;i++){
	   scanf("%d",&m[i]);
	}
	for(i=1;i<=n;i++){
		for(j=i+1;j<=n;j++){
			if(m[i]+m[j]==x)
				goto A;	
			}
		}
	A:
	if(i==n+1) printf("no");
	else printf("yes");
	

	return 0;
}
