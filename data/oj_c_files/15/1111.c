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
	int n,i=0;
	int a=0;
	scanf("%d",&n);
	int *sz=(int*)malloc(sizeof(int)*(n*n));
	int k;

	for(k=0;k<(n*n);k++)
	{
		scanf("%d",&(sz[k]));
		if(sz[k]==0){
			i++;
		}
	}
	int cond=0;
	for(k=0;k<(n*n);k++)
	{
		if(sz[k]==0&&cond==0){
			a++;
			if(sz[k+1]==255){
				cond=1;
			}
			else{continue;}
		}
	}	
	int j;
	j=(i-(a)*2)/2+2;
	int s;
	s=(j-2)*(a-2);
	printf("%d\n",s);
	free(sz);
	return 0;
}