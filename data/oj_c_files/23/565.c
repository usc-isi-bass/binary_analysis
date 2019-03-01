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

int main ()
{
	char a[100][20],b[100],c;
	int i=0,j=0,k=0,m,n;
	b[0]=0;
	while((c=getchar())!='\n')
	{
	         if(c!=' ' )
	          {
			      a[i][j]=c;
			      j++;
				  b[i]++;
		       }
			 else 
			   {
				i++;
				b[i]=0;
				j=0;
			   }
	}
	for(m=i;m>=0;m--)
	{ 
		if(m>0)
	      {
		   for(n=0;n<b[m];n++)
		      cout<<a[m][n];
		   cout<<" ";
		  }
		else 
			for(n=0;n<b[m];n++)
				cout<<a[m][n];
	}
	return 0;
}