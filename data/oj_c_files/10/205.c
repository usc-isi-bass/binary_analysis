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

int missle[25];
int n;
int Intercept(int i,int j){
	int k,max=1,sum=1;
	for(k=i+1;k<j;k++){
		if(missle[k]<=missle[i]&&missle[k]>=missle[j])
			sum=Intercept(k,j)+1;
		else continue;
		if(sum>max)max=sum;
		sum=1;
	}
	return max;
}
void main()
{
	int i,j,max=1,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&missle[i]);
	for(i=0;i<n;i++){
		for(j=i+1;j<n;j++){
			if(missle[j]<=missle[i]){
				sum=Intercept(i,j)+1;
			}
			else continue;
		    if(sum>max)max=sum;
		    sum=0;
		}
	}
	printf("%d\n",max);
}

