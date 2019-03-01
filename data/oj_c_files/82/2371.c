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
	int I,n,a[100],i,b[100],p=0,s=0,q=0,sum=0;

	scanf("%d",&n);

	for(I=0;I<n;I++)
	scanf("%d %d",&a[I],&b[I]);
	for(i=0;i<n;i++){
		if(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90) q=1;
		if(q==1&&(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)){
			if(i!=n-1) s++;
			else sum=sum>(s+1)?sum:(s+1);
		}
		if(q==1&&!(a[i]>=90&&a[i]<=140&&b[i]>=60&&b[i]<=90)){
			sum=sum>s?sum:s;
			s=0;
			q=0;
		}
	}
	printf("%d\n",sum);

}