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


int main(int argc, char* argv[])
{
	


char str[11],substr[4],max;
int m,n,i,j,z,t,temp=0;
while(scanf("%s%s",str,substr)!=EOF)
{
      m=strlen(str);
      n=strlen(substr);
      max=str[0];
      
      for(i=0;i<m;i++)
	  {
		  if(str[i+1]>max)
		  {
			  max=str[i+1];
			  temp=i+1;
		  }
	  }
	  for(j=0;j<=temp;j++)
	  {
		  printf("%c",str[j]);
	  }
	  for(z=0;z<n;z++)
	  {
		  printf("%c",substr[z]);
	  }
	  for(t=temp+1;t<m;t++)
	  {
		  printf("%c",str[t]);
	  }
	  printf("\n");
}
return 0;
}

