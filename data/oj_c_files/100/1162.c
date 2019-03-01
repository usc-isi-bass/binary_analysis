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
	char str[300],*ps;
	int count=0;
	scanf("%s",str);
	char i='a';
	int f = 0;
	for(i='a';i<='z';i++)
	{
		for(ps=str;*ps!='\0';ps++)
		{
			if(*ps==i)
			{   f+= 1;   
				count++;
			}
		}
if(count>0){
		printf("%c=%d\n",i,count);}
   count=0;
	}
    if(f==0)
	{
		printf("No");
	}
	return 0;
}