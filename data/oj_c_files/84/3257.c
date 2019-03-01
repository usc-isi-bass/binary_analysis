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


void main()
{
	int I,n,a[100],i,j,p;
	scanf("%d",&n);

	for(I=0;I<n;I++)
	scanf("%d",&a[I]);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(a[i]>a[j]){
				p=a[i];
				a[i]=a[j];
				a[j]=p;
			}
	}
	printf("%d\n%d\n",a[0],a[1]);
}