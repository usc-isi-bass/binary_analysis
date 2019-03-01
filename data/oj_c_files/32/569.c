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
	char a[101],b[101];
    int n,i,j,c1,c2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
	{ scanf("%s",a);
	  scanf("%s",b);
	  c1=strlen(a);
	  c2=strlen(b);
	  for(j=c1-1;j>=c1-c2;j--)
	  { if(a[j]<b[j-c1+c2])
	  {a[j]=a[j]+10-b[j-c1+c2]+48;a[j-1]--;} 
	    else a[j]=a[j]-b[j-c1+c2]+48;
	  }
	  printf("%s\n",a);
	}
}
	       
	 