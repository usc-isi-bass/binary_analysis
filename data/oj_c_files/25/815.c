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

int a[MAX]={0};
int main()
{
	a[0]=1;
	int i,j,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
        for(j=0;j<=MAX;j++){
        	a[j]=2*a[j];
        }
        for(j=0;j<=MAX;j++){
        	if(a[j]>=10){
        		a[j+1]+=a[j]/10;
	        	a[j]=a[j]%10;
	        }
        }
	}
	int k;
	for(i=MAX;i>=0;i--){
		if(a[i]!=0){
		   k=i; 
		   break;	
		}		
	}
	for(i=k;i>=0;i--)
	printf("%d",a[i]);
}