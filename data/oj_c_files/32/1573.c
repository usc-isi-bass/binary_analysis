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

void main ()
{
	int i=0,j=0,k,t,r=0,h;
    int x[100],y[100],z[100],s[100]={0};
	char a[100][100],b[100][100];
    scanf ("%d",&j);
    for (i=0;i<j;i++)
   {
   scanf ("%s%s",a[i],b[i]);
   getchar();
   x[i]=strlen(a[i]);
   y[i]=strlen(b[i]);
	}
	for (i=0;i<j;i++)
	{
        for (k=0;k<y[i];k++)
		{
			if (a[i][x[i]-k-1]>=b[i][y[i]-k-1])
			{
				a[i][x[i]-k-1]=a[i][x[i]-k-1]-b[i][y[i]-k-1]+'0';
			}
			else 
			{
                a[i][x[i]-k-1]=a[i][x[i]-k-1]-b[i][y[i]-k-1]+10+'0';
				a[i][x[i]-k-2]=a[i][x[i]-k-2]-1;
			}
		}
	}
     for (i=0;i<j;i++)
	 {
         printf("%s\n",a[i]);
	 }

   
   
	
	
     
      
}


	
	
