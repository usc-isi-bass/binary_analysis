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
	int i,n,l=0;
	int a[400];
	double max=0,s=0,p,b[400];
	scanf("%d",&n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	for(i=0;i<n;i++)
		s+=a[i];
	p=s/n;
	for(i=0;i<n;i++){
		if(a[i]>p) b[i]=a[i]-p;
		else b[i]=p-a[i];
		if(b[i]>max) max=b[i];
	}
	for(i=0;i<n;i++)
		if(b[i]==max){
			if(l!=0)
				printf(",%d",a[i]);
			else{
				printf("%d",a[i]);l+=1;}
		}
}

