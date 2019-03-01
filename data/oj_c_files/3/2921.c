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

int main(){
	int k,a[1000],i,j,n,t;
		scanf("%d%d",&n,&k);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);}
	for(i=0,t=0;i<n;i++){
		for(j=0;j<n;j++){
			if(a[i]+a[j]==k)
			{break;}}
		if(j!=n&&i!=j)
			t++;
}
	if(t>0)
	printf("yes"); 
	else
		printf("no"); 

 	return 0;
	}
