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
	int i=0,n=0,a[300],max=-1;
	char c;
	do{
		scanf("%d",&a[n++]);
		c=getchar();
	}while(c==',');
	for(i=0;i<n;i++) if(a[i]>max) max=a[i];
	for(i=0;i<n;i++) if(a[i]==max) a[i]=0;
	max=0;
	for(i=0;i<n;i++) if(a[i]>max) max=a[i];
	if(max) printf("%d",max);
	else printf("No");
}