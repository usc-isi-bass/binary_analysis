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
	char s[50],w[50];
	int lens,lenw,temp,i,j,k;
	scanf("%s",s);
	scanf("%s",w);
	lens=strlen(s);
	lenw=strlen(w);
	for(i=0;i<=lenw-lens;i++)
	{
		temp=1;
		for(j=i,k=0;k<=lens-1;j++,k++)
		{
			if(s[k]!=w[j])
			{
				temp=0;
				break;
			}
		}
		if(temp==1)
		{
			printf("%d\n",i);
			break;
		}
	}
}
	
	