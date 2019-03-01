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
{  int n,i,j;
   char m[1000][1000],t[1000][1000];
   scanf("%d",&n);
   for(i=0;i<n;i++)
   { 
	   scanf("%s",m[i]);
   }
   for(i=0;i<n;i++)
	{
		for(j=0;j!=1000;j++)
		{   
			if(m[i][j]=='A')
				t[i][j]='T';
			else if(m[i][j]=='T')
				t[i][j]='A';
			else if(m[i][j]=='G')
				t[i][j]='C';
			else if(m[i][j]=='C')
				t[i][j]='G';
		}
	}
	for(i=0;i<n;i++)
	{
	  printf("%s\n",t[i]);
	}
	return 0;
}
