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
	int n,i,k,m,c;
	scanf("%d",&n);
	int a[500],b[500];
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int j=0;
	for(i=0;i<n;i++){
		if(a[i]%2!=0&&a[i]!=0){
			b[j]=a[i];
			j++;
		}
	}
	for(k=1;k<=j;k++){
		m=0;
		for(i=0;i<=j-k;i++){
			if(b[i]>b[m]){
				m=i;
			}
		}
		if(m!=j-k){
			c=b[m];
			b[m]=b[j-k];
			b[j-k]=c;
		}
	}
    for(k=0;k<j-1;k++){
	   printf("%d,",b[k]);
    }
	printf("%d",b[j-1]);
	return 0;
}

