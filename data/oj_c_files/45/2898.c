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
	char c[N];
	gets(c);
	int len,len1;
	len=strlen(c);
	int i,j,k=0;
	for(i=0;i<len;i++)
	{
		if(c[i]!=' ')
		{k=k++;}
		else
		{break;}
	}
	len1=k;//printf("%d\n",len1);
    for(i=len1+1;i<=len-len1;i++)
	{
		k=0;
       for(j=0;j<len1;j++)
	   {
		   if(c[i+j]==c[j])
		   {
			   k=k++;
		   }
	   }
	   if(k==len1)
	   {
		   printf("%d\n",i-len1-1);
		   break;
	   }
	}
	
	return 0;
}