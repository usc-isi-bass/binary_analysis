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
	int i,l=0,max=0,min=20,count=0;
	char word[1000],*big,*small;
	while((word[l]=cin.get())!='\n')
		l++;
	for(i=0;i<l;i++)
	{
		if(word[i]==','||word[i]==' ')
		{
			if(count>max)
			{
				max=count;
				big=&word[i-count];
			}
			if(count<min)
			{
				min=count;
				small=&word[i-count];
			}
			count=0;
			if(word[i]==',')
				i++;
		}
		else
			count++;
	}
	if(count>max)
	{		
		max=count;
		big=&word[i-count];
	}
	if(count<min)
	{
		min=count;
		small=&word[i-count];
	}
	int x,y;
	for(x=0;x<max;x++)
		cout<<*(big+x);
	cout<<endl;
	for(y=0;y<min;y++)
		cout<<*(small+y);
	cout<<endl;
	return 0;
}
