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
	int n,i,j,sum=0,len;
	char  a[260];
	scanf("%d",&n);

	  for(j=0;j<n;j++)
	 {
		  len=0;
      scanf("%s",&a);
       len=strlen(a);
	for(i=0;i<len;i++)
	{

		if(i!=len-1)
		{
	  if (a[i]=='A')
	  {
        printf("T");
	  }
	  else if(a[i]=='T')
	  {
        printf("A");
	  }
	  else if(a[i]=='G')
	  {
        printf("C");

	  }
      else if(a[i]=='C')
	  {
        printf("G");
	  }
		}
		else
			{
	  if (a[i]=='A')
	  {
        printf("T\n");
	  }
	  else if(a[i]=='T')
	  {
        printf("A\n");
	  }
	  else if(a[i]=='G')
	  {
        printf("C\n");

	  }
      else if(a[i]=='C')
	  {
        printf("G\n");
	  }
		}
    }
	  }
	
	return 0;
}