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
	int n,k,i,j,m=0,z;
	scanf("%d %d",&n,&k);
	i=1;
	while(m!=n-1){
	z=i*(n-1);
	for(j=0;j<n-1;j++){
		if((z/(n-1)*n+k)%(n-1)==0){
		z=z/(n-1)*n+k;
		m+=1;
		}else{
			m=0;
			break;
		}
	}
	i++;
	}
	z=z/(n-1)*n+k;
	printf("%d",z);
	return 0;
}