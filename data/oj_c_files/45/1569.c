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
   char a[100],b[100];
      int len1,len2,i,j;
      scanf("%s%s",a,b);
	  len1=strlen(a);
	  len2=strlen(b);
	  for(i=0;i<=len2-len1;i++)
	  {
		  for(j=i;j<i+len1-1;j++)
		  {
			  if(b[j]==a[j-i])continue;
			  else break;
		  }
			if(j==i+len1-1)
			{
				printf("%d",i);
				break;
			}
	  }
    return 0;
}

	