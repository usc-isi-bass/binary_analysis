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
	int n,i,j,t=0,a[400];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		scanf("%d",&a[i]);
     for(i=2;i<=n;i++)
	 {
		 for(j=1;j<i;j++)
		if(a[i]==a[j])a[i]=-999999;
                  
		 

	 }
	 for(i=1;i<=n;i++)
	if(a[i]!=-999999)t=i;
	  for(i=1;i<t;i++)  
		if(a[i]!=-999999)printf("%d,",a[i]);
		printf("%d",a[t]);

}
