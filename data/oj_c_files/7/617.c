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
	char an[256],be[256],ce[256];
	int i,j,m,n,k=0,h;
	gets(an);
	gets(be);
	gets(ce);
	m=strlen(an);
	n=strlen(be);
	h=strlen(ce);
  for(i=0;i<m;i++)
  {

		if(an[i]==be[0])
		{
			for(j=1;j<n;j++)
			{
				if(be[j]!=an[i+j])
				{
					break;
				}
			}
			if(j==n)
			{
				for(k=0;k<i;k++)
			     printf("%c",an[k]);
				for(k=0;k<h;k++)
				{
					printf("%c",ce[k]);
				}
				for(k=i+n;k<m;k++)
				{
					printf("%c",an[k]);
				}
				break;
			}
		
		}
	}
  if(k!=m)
  {
	  printf("%s",an);
  }
  return 0;
}
		

		
