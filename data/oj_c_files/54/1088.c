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
	int n,k,sum;
	int getsum(int n1,int k1);
	scanf("%d%d",&n,&k);
	sum=getsum(n,k);
	printf("%d",sum);
	return 0;
}
int getsum(int n1,int k1){
	int i,j=1,a,sum1;
	while(1){
		sum1=n1*j+k1;
		if(n1==1)
			return sum1;
		if(n1>1){
		for(i=0;i<n1-1;i++){
			if(sum1%(n1-1)==0){
				sum1=sum1*n1/(n1-1)+k1;
				if(i==n1-2)
					return sum1;
			}
			else
				break;
		}
		j++;
		}
	}
}
