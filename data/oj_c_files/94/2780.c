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
    int n,i,j,m,l,s;
    int a[MAX],b[MAX];
	j=0;
	scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
        if(a[i]<=0){
            return 0;
        }
		if((a[i]+1)%2==0){
			b[j]=a[i];
			j++;
		}
    }
    s=j-1;
    for(i=0;i<s;i++){
		for(l=i+1;l<j;l++){
			if(b[i]>b[l]){
            m=b[i];
			b[i]=b[l];
			b[l]=m;
			}
		}
	}
	for(i=0;i<s;i++){
		printf("%d,",b[i]);
	}
	printf("%d",b[s]);
    return 0;
}