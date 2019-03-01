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
	int k;
	int n;
	scanf("%d",&n);
	int flag=0;
	int sz[1000];
    int e;
	int i;
	for(i=0;i<=n-1;i++){
		scanf("%d", &sz[i]);
	   }
    for(int a=1 ; a<=n ; a++){
		for(int i=0; i<n-a; i++){
			if(sz[i]>sz[i+1]){
				e=sz[i+1];
				sz[i+1]=sz[i];
				sz[i]=e;
			}
		}
	}
	
	for(int b=0;b<=n;b++ ){
		if(sz[b]%2!=0){
			
			if(flag==1)
				printf(",%d",sz[b]);
			else
			{
				printf("%d",sz[b]);
				flag=1;
			}
		}
	}
	return 0;
}