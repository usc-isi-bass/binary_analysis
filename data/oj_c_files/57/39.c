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
{int n,i,j,k,a[100];
char c[100][100];
char e;
scanf("%d",&n);
for (i=0;i<n;i++)
   scanf("%s",c[i]);
for (i=0;i<n;i++)
  a[i]=strlen(c[i]);

for(i=0;i<n;i++)
{  k=a[i];

 if ((e=c[i][k-3])=='i')
 { for (j=0;j<k-3;j++)
		 printf("%c",c[i][j]);
	 printf("\n");
 }	 

else 
{ for (j=0;j<k-2;j++)
	   printf("%c",c[i][j]);
   printf("\n");
}

}


}