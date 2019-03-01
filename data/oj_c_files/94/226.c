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


int main(int argc, char* argv[])
{
	int a[1000];
	int s[1000];
	int n,k=0,i;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&(a[i]));
	}
     for(i=0;i<n;i++){
		 if(a[i]%2!=0){
			 s[k]=a[i];
			 k++;
		 }
	 }
	for(int m=1;m<=k;m++){
		for(int i=0;i<k-m;i++){
			if(s[i]>s[i+1]){
				int t=s[i+1];
				s[i+1]=s[i];
				s[i]=t;
			}
		}
	}
	for(i=0;i<k;i++){
		if(i==0){
		printf("%d",s[i]);
		}
		else 
			printf(",%d",s[i]);
	}
	return 0;
}
