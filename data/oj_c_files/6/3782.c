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
	int k,m[1000],n[1000],i,a,b,x,sum;
	scanf("%d",&k);
	sum=0;
	for(i=0;i<k;i++){
		scanf("%d %d",&m[i],&n[i]);
		for(a=0;a<m[i];a++){
			for(b=0;b<n[i];b++){
				scanf("%d",&x);
				if(a==0||b==0||a==m[i]-1||b==n[i]-1){
					sum+=x;
				}
			}
		}
		printf("%d\n",sum);
		sum=0;
	}
	return 0;
}
