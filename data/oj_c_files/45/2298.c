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
{
	char w1[50]={0},w2[50]={0};
	int i=0,n,k,flag;
	scanf("%s%s",w1,w2);
	n=strlen(w1);
	for(i=0;i<50;i++)
	{
		if(n==1)
		{	if(w2[i]==w1[0])
			{
			  printf("%d",i);
			  goto end;
			}
		}
		else if(n>=2)
		{
			flag=0;
			for(k=0;k<n;k++)
			{
				if(w1[k]!=w2[k+i])
				{
					flag=1;
					break;
				}
			}
			if(flag==0)
			{
				printf("%d",i);
				goto end;
			}
		}
	}

	
end:;
}

