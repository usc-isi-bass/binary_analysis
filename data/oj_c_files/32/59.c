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
    int n,i,lengtha,lengthb,j;
	char a[100],b[100],c;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	    {
		     scanf("%s",a);
			 scanf("%s",b);
			 c=getchar();
			 lengtha=strlen(a);
			 lengthb=strlen(b);
			 for(j=lengthb-1;j>=0;j--)
			    {
				      if(a[lengtha-lengthb+j]<b[j])
				  {
				      a[lengtha-lengthb+j]='0'+10+a[lengtha-lengthb+j]-b[j];
				      a[lengtha-lengthb+j-1]=a[lengtha-lengthb+j-1]-1;
				  }
				      else
					  a[lengtha-lengthb+j]='0'+a[lengtha-lengthb+j]-b[j];
				}
			 puts(a);
			}
}				