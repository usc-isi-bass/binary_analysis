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
    int n,k;
	int a[1000];
	
	
	scanf("%d %d",&n,&k);
	for(int j=0;j<n;j++)
	{  scanf("%d",&a[j]);
	}

	for(int e=0;e<=n;e++){
		for(int i=e+1;i<n;i++){
			if(a[e]+a[i]==k){
			printf("yes");
			e=n+1;
			i=n;}
			}
		if(e==n){	
			printf("no");}	
	}
	

	return 0;





}