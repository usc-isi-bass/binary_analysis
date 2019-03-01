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
	char str1[54],str2[54];
	int i,j,n,m,t,x,flag=1;
	scanf("%s%s",str1,str2);
      n=strlen(str1);
	  m=strlen(str2);
	  for(i=0;i<m-n;i++)
	  {
		  x=0;flag=1;
		  for(j=i;j<i+n-1;j++)
		  {
			  if(str1[x]!=str2[j])
			  { flag=0;break;}
			  x++;
		  }
		  if(flag==1)
			  break;
	  }
	  printf("%d",i);
	return 0;
}