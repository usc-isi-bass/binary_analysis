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

int total(int n,int k)               //?????????
{
	int m;
	int i;
	int t=1;
	int count=0;

	while(1){
	m=n*t+k;

	for(i=1;i<n;i++){
	    if(m%(n-1)!=0){
	    	t++;
		count=0;
		break;
	    }else{
		count++;
	    }
	    m=m/(n-1)*n+k;
	}

	if(count!=0){
	    return m;
	}
         }
}

int main()
{
	int n;
	int k;
	int m;

	scanf("%d%d",&n,&k);
	m=total(n,k);
	printf("%d",m);

	return 0;
}
