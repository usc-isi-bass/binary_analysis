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
	int x[1000][1000];
	int i=0,j=0;
	int n=0;
	int a1=0,b1=0,a2=0,b2=0;
	int sn=0;

	scanf("%d",&n);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
		{
			scanf("%d",&x[i][j]);
		}
	}
	
	for(i=1;i<n;i++){
		for(j=1;j<n;j++)
		{
			if(x[i][j]==0&&x[i][j-1]!=0&&x[i-1][j]!=0){
			a1=i;
			b1=j;
			}
		}
	}

	for(i=0;i<n-1;i++){
		for(j=0;j<n-1;j++)
		{
			if(x[i][j]==0&&x[i][j+1]!=0&&x[i+1][j]!=0){
			a2=i;
			b2=j;
			}
		}
	}

	sn=(a2-a1-1)*(b2-b1-1);
	
	printf("%d",sn);
	return 0;                                     
}

