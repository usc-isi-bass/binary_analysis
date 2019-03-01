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
	char a[301];
	int i,j,n,m=0,k=0;
	scanf("%s",a);
	n=strlen(a);
	for(j=65;j<91;j++){
		for(i=0,m=0;i<=n;i++){
			if(a[i]!=j)
				continue;
			else{
			    m=m+1;
			k=k+1;
			}
		}
		if(m!=0)
		   printf("%c=%d\n",j,m);
	}
	for(j=97;j<123;j++){
		for(i=0,m=0;i<=n;i++){
			if(a[i]==j){
			    m++;
				k++;
			}
		}
		if(m!=0)
		   printf("%c=%d\n",j,m);
	}
	if(k==0)
		printf("No\n");
}
