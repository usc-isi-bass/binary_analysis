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
	int n,i,k,a[100000][3],c[100000][3];
	scanf("%d",&n);
	for(i=0;i<n;i++)
	 scanf("%d%d%d",&a[i][1],&a[i][2],&a[i][3]);
	for(i=n-2;i>=0;i--) 
	{ if(a[i][2]+a[i][3]<a[i+1][2]+a[i+1][3]) 
	  {c[i][1]=a[i][1];c[i][2]=a[i][2];c[i][3]=a[i][3]; 
       a[i][1]=a[i+1][1];a[i][2]=a[i+1][2];a[i][3]=a[i+1][3]; 
       a[i+1][1]=c[i][1];a[i+1][2]=c[i][2];a[i+1][3]=c[i][3];
	  } 		  
	}
	for(i=n-2;i>=1;i--) 
	{ if(a[i][2]+a[i][3]<a[i+1][2]+a[i+1][3]) 
	  {c[i][1]=a[i][1];c[i][2]=a[i][2];c[i][3]=a[i][3]; 
       a[i][1]=a[i+1][1];a[i][2]=a[i+1][2];a[i][3]=a[i+1][3]; 
       a[i+1][1]=c[i][1];a[i+1][2]=c[i][2];a[i+1][3]=c[i][3];
	  } 		  
	}
	for(i=n-2;i>=2;i--) 
	{ if(a[i][2]+a[i][3]<a[i+1][2]+a[i+1][3]) 
	  {c[i][1]=a[i][1];c[i][2]=a[i][2];c[i][3]=a[i][3]; 
       a[i][1]=a[i+1][1];a[i][2]=a[i+1][2];a[i][3]=a[i+1][3]; 
       a[i+1][1]=c[i][1];a[i+1][2]=c[i][2];a[i+1][3]=c[i][3];
	  } 		  
	}
	for(k=0;k<3;k++)
	   printf("%d %d\n",a[k][1],a[k][2]+a[k][3]);
	return 0;
}