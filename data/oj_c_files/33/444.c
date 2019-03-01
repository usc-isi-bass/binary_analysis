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
    int n,i,j;
	char c[256];
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{

	    scanf("%s",c);
		for(j=0;j<strlen(c);j++)
		{
              if(c[j]=='A') 
			  {
				  c[j]='T';
				  continue;
			  }
			  if(c[j]=='T')
			  {
				  c[j]='A';
				  continue;
			  }
			  if(c[j]=='C')
			  {
			      c[j]='G';
				  continue;
			  }
			  if(c[j]=='G')
			  {
                  c[j]='C';
				  continue;
			  }
		}
			printf("%s",c);
		printf("\n");
	}
	return 0;
}