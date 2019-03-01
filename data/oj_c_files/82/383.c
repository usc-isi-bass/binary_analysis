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
	int i,n,x[100],y[100],z[100],s=0,t=0;
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		scanf("%d %d",&x[i],&y[i]);
		if(x[i]<=140&&x[i]>=90&&y[i]<=90&&y[i]>=60){
			z[i]=1;
			
		}
		else {z[i]=0;}
	}
	for(i=1;i<=n;i++){
		if(z[i]==1){
			s=s+1;
		}
		if(z[i]==0||i==n){
			if(s>t){
				t=s;
			}
			s=0;
		}
	}

printf("%d",t);
	return 0;
}
