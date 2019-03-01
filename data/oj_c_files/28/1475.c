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
	char s[10000],b[300][100];
	int i,n,m,j=0,k=0,tag=0;
	int a[300];
	gets(s);
	n=strlen(s);
	for(i=0;i<n;i++)
	{
		if(s[i]!=' ')
		{
			b[j][k]=s[i];
			k++;
		}
		else if(s[i]==' ')
		{
			b[j][k]='\0';
			j++;
			k=0;
		}
	}
	tag=0;
	for (m=0;m<j+1;m++)
	{	
		a[m]=strlen(b[m]); 
		if(a[m]!=0)
		{ 	
			  if(m==0) 
			  {
			  	 printf("%d",a[m]);
			  	 tag=1;
			  }
	          else
	          {
	          	 if(tag==0) 
	          	 {
	          	 	 printf("%d",a[m]);
	          	 	 tag=1;
	          	 }
	          	 else  printf(",%d",a[m]);
	          } 
		}
	}
	return 0;
}