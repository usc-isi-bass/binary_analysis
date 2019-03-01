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
	char queue[100];
	cin.getline(queue,100);
	int i,j;
	for(i=1;i<strlen(queue);i++)
	{
		if(queue[i]!=queue[0])
		{
			queue[i]=')';
		}
		if(queue[i]==queue[0])
		{
			queue[i]='(';
		}
	}
	queue[0]='(';
	for(i=0;i<strlen(queue);i++)
	{
		if(queue[i]==')')
		{
			j=i-1;
			while((queue[j]=='*')&&(j>0))
			{
				j=j-1;
			}
			cout<<j<<" "<<i<<endl;
			queue[j]='*';
			queue[i]='*';
		}			
	}
	return 0;
}