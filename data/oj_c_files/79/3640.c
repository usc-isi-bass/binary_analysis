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
	int n,i,j,m,a[300];
	while(1){
		scanf("%d %d",&n,&m);
		if(n==0||m==0)
			break;
		for(i=0;i<n;i++)
			a[i]=i+1;
		i=0;
		while(n!=0){
			i=i+m-1;
			for(j=i%n;j<n-1;j++)
				a[j]=a[j+1];
			i=i%n;
			n--;
		}
		printf("%d\n",a[0]);
	}
	return 0;
}