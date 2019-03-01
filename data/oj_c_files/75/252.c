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
	int m=0,n=0,i,j,len1,len2;
	int a[1000],b[1000],c[1000]={0};
	char e,d;

	for(i=1;;i++){
		scanf("%d%c",&a[i],&e);
		if(e=='\n'){
			break;
		}
	}

	for(j=1;;j++){
		scanf("%d%c",&b[j],&d);
		if(d=='\n'){
			break;
		}
	}
	printf("%d ",i);
	m=i;
	
		for(j=1;j<1000;j++){
             for(i=1;i<=m;i++){
		    	if(j>=a[i]&&j<b[i]){
					c[j]=c[j]+1;
				}
			 }
		}
		for(i=1;i<1000;i++){
			if(c[1]<c[i]){
				c[1]=c[i];
			}
		}
		printf("%d",c[1]);
	return 0;
}