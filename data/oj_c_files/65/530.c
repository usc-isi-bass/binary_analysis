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
	int a[1000],b[1000];
	int n,i,z=0,x=0;
	scanf ("%d",&n);
	for(i=0;i<=n-1;i=i+1){
		scanf ("%d%d",&a[i],&b[i]);
	}
	for(i=0;i<=n-1;i=i+1){
       if(a[i]==0&&b[i]==1)
		   z=z+1;
	   else if(a[i]==0&&b[i]==2)
		   x=x+1;
	   else if(a[i]==1&&b[i]==0)
		   x=x+1;
	   else if(a[i]==1&&b[i]==2)
           z=z+1;
	   else if(a[i]==2&&b[i]==0)
		   z=z+1;
	   else if(a[i]==2&&b[i]==1)
		   x=x+1;
	   else if(a[i]==b[i])
		   z=z+0;
	       x=x+0;
	}
	if(z>x)
		printf("A");
	if(z<x)
		printf("B");
	if(z==x)
		printf("Tie");
	return 0;
}