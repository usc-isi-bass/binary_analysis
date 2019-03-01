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
	int num,i,len;
	char word[1000][50];
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{
		scanf("%s",word[i]);
	}
	len=0;
	i=0;
	while(i<num)
	{
		while(len+strlen(word[i])<=80)
		{
			len=len+strlen(word[i]);
			cout<<word[i];
			if(i+1>=num)
			{
				i++;
				break;
			}
			if(len+strlen(word[i+1])<80)
			{
				cout<<" ";
			}
			len=len+1;
			i++;
		}
		cout<<endl;
		len=0;
	}
}