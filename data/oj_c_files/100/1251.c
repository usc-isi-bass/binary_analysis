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
	int len,i,sum[27]={0},m=0;
	char zfc[300],k;
	scanf("%s",zfc);
	len=strlen(zfc);
	for(k='a';k<='z';k++)
	{
	    for(i=0;i<len;i++)
		{
			if(k==zfc[i])
			{
				sum[m]++;
			}
		}
      if(sum[m]!=0)
	  {
	     printf("%c=%d\n",k,sum[m]);
	  }
      m++;
	}
	for(i=0;i<m-1;i++)
	{
		if(sum[i]!=0)
			goto abc;
	}
	printf("No\n");
abc: return 0;
}
