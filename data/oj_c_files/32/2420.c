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
{int n,i,j,p,q,m;
  char a[100],b[100],c[100]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{scanf("%s",a);
	  scanf("%s",b);
       p=strlen(a);
       q=strlen(b);		
     for(j=0;j<q;j++)
	 {m=a[p-1-j]-b[q-1-j];
	   if(m<0) m+=10,a[p-2-j]-=1;
	   c[p-1-j]='0'+m;	 
	  }
	for(j=0;j<p-q;j++)
	  c[j]=a[j];
	 for(j=0;j<p;j++)
	  if(c[j]!='0')break;
	 for(;j<p;j++)
	  printf("%c",c[j]);
	printf("\n");
	  }
}