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
	int n,k,a[1000],i,j,e=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)scanf("%d",&a[i]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			if(i==j)continue;
			if(a[i]+a[j]==k){
			   e++;
			}
		}
	}
	if(e==0)printf("no");
	else if(e>0)printf("yes");
	return 0;
}