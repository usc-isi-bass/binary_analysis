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
    int i,j,count=0;
	char s[50],w[50],*ps;
	scanf("%s %s",s,w);
    for(i=0;i<50;i++)
	{
		if(w[i]==s[0])
		{
			j=i;
			for(ps=s;*ps!='\0';ps++,i++)
			{
               if(*ps!=w[i])
				   count++;
			}
			if(count==0)
				printf("%d",j);
	
		}
	}
	return 0;
}