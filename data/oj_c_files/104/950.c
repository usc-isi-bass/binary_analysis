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

int f(int a){
	int t;
	if(a%2==0){
		t=a/2;
	}
	else{
		t=(a-1)/2;
	}
	return(t);
}
int main()
{
	int m,n,i,j,p,q,r;
	int a[100],b[100];
	i=0;j=0;
	scanf("%d%d",&m,&n);
	while(m>=1){
		a[i]=m;
		i++;
		m=f(m);
	}
	while(n>=1){
		b[j]=n;
		j++;
		n=f(n);
	}
	for(p=0;p<i;p++){
		r=0;
		for(q=0;q<j;q++){
			if(a[p]==b[q]){
				printf("%d",a[p]);
				r++;
				break;
			}
		}
		if(r>0){
			break;
		}
	}
	return 0;
}