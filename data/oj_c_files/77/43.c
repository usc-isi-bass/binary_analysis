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
	char s[101];gets(s);
	struct kid
	{
		char c;
		int num;
	}kid[100];
	int n;
	n=strlen(s);
	int i,j;
	for(i=0;i<n;i++)
	{
		kid[i].c=s[i];
	}
	for(i=0;i<n;i++)
	{
		kid[i].num=i;
	}
	
	for(i=0;i<n-1;i++)
	{
        if(kid[i].c!=kid[i+1].c)
		{
			printf("%d %d\n",kid[i].num,kid[i+1].num);
			
			for(j=i;j<n-2;j++)
			{kid[j]=kid[j+2];}
			n-=2;
			i=-1;
			
		}
      
	}

return 0;    


}
