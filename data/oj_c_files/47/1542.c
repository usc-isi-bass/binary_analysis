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
	int n,i,e,j;
	 
	scanf("%d",&n);
    int a[100],b[100];
	
	for(i=0;i<n;i++){
scanf("%d",&(a[i]));
		
	}
	for(j=0;j<n;j++){
   b[j]=a[n-j-1];
	}
	for(e=0;e<n;e++){
		if(e==n-1){
			printf("%d",b[e]);
		}
		else 
		{
			printf("%d ",b[e]);
		}
	}
		return 0;
}
