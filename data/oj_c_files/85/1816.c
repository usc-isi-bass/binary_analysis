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
  char c[30];
  int sz[30]={0};

  scanf("%d\n",&n);

  for(i=0;i<n;i++)
  {
	  gets(c);

	  if((c[0]>='a' && c[0]<='z') || (c[0]>='A' && c[0]<='Z') || (c[0]=='_'))
	  {
		  for(j=1;c[j]!='\0';j++)
		  {
			  if(!((c[j]>='a' && c[j]<='z') || (c[j]>='A' && c[j]<='Z') || (c[j]=='_') || (c[j]>='0' && c[j]<='9')))
			  {
				 sz[i]=1;
				 break;
			  }
		  }
	  }
	  else
	  {
		  sz[i]=1;
	  }
  }

  for(i=0;i<n;i++)
  {
	  if(sz[i]==0)
	  {
		  printf("yes\n");
	  }
	  else
	  {
		  printf("no\n");
	  }
  }
  
 
 

  return 0;
}
