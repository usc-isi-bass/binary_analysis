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

char x,y;
int main()
{
	int i;
	void result(char a[]);
	char line[200];
	scanf("%s",line);
	x=line[0];
	for(i=0;i<=strlen(line)-1;i++)
	{
		if(line[i]!=x) 
		{y=line[i];
		break;}
	}
    result(line);
	
	return 0;
}
void result(char a[])
{
    if((a[0]!='.')&&(a[strlen(a)-1]!='.'))
	{
	int i,j;
	for(i=1;i<=(strlen(a)-1);i++)
	{
		if(a[i]==y)
		{
		for(j=i-1;j>=0;j--)
		{
			
			if (a[j]==x)
			{
				printf("%d %d",j,i);
				printf("\n");
				a[i]='.';a[j]='.';
				break;
			}
		}
		}
	}
    result(a);
	}
	
}