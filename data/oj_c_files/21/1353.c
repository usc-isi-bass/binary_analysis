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

main()
{
	int n,i,s=0,w;
	float p,q;
	int a[300]={0},c[10];
	float b[300]={0.0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		s+=a[i];
	}
	p=(float)s/n;
	q=0;w=0;

	for(i=0;i<n;i++){
		b[i]=a[i]-p;
		if(b[i]<0)
			b[i]=-b[i];
	}
	for(i=0;i<n;i++){
		if(b[i]>q)
			q=b[i];
	}
	for(i=0;i<n;i++){
		if(b[i]==q){
			c[w]=i;
			w++;
		}
	}
	for(i=0;i<w-1;i++)
		printf("%d,",a[c[i]]);
	printf("%d",a[c[w-1]]);
	return 0;
}

