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
	int i,j,count=0;
    char line[200],tmp;
	scanf("%s",line);
	tmp=line[0];
	for(i=0;line[i];i++) count++;
	for(i=0;line[i];i++)
	{
		if(line[i]==tmp)     //???
		{
			for(j=i+1;line[j];j++)
			{
				if(line[j]==tmp) break;
				else if(line[j]!=tmp&&line[j]!='0')    //???
				{
					printf("%d %d\n",i,j);
					line[i]=line[j]='0';
					i=0;
				    break;
				}
			}
		}
	}
	printf("0 %d\n",count-1);
	return 0;
}