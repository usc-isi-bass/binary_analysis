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
{void min(char a[],char b[]);
int n,i,j,k;

char a[100][110];
char b[100][110];

scanf("%d",&n);
for (i=0;i<n;i++)
{ scanf("%s %s",a[i],b[i]);
   printf("\n");
}
for (i=0;i<n;i++)
  min(a[i],b[i]);
}

void min(char a[],char b[])
{
 int i,j=0,pa[110],pb[110];
      int la=strlen(a);
	  int lb=strlen(b);
      for(i=la-1;i>=0;i--)
	  {
		pa[j++]=a[i]-'0';
	  }
	  for(i=j;i<109;i++)
		  pa[i]=0;
	  j=0;

      for(i=lb-1;i>=0;i--)
		{
	     pb[j++]=b[i]-'0';
		}
	  for(i=j;i<109;i++)
		  pb[i]=0;
	  for(i=0;i<la;i++)
	  {
		  pa[i]-=pb[i];
		  if(pa[i]<0)
		  {
			  pa[i]+=10;
			  pa[i+1]--;
		  }
	  }
	  int out=0;
	  for(i=la-1;i>=0;i--)
	  {
	  if(out)
		  printf("%d",pa[i]);
		  else if(pa[i])
		  {
			  printf("%d",pa[i]);
		      out=1;
		  }

	 }
	  printf("\n");
	  return;
}