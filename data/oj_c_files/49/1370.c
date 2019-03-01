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

char f1(char ch[],int left,int right)
{
    if(left >= right)
	{
		return 1;
	} 
	else if(ch[left] != ch[right]) 
	{
		return 0;
	}
	else 
	{
		return f1(ch, left+1, right-1);
	}
}
char f2(char ch[],int start,int end)
{
    while(start<=end) 
	{
		putchar(ch[start++]);
	}
    putchar('\n');
	return '0';
}
main()
{
	char ch[500];
	int i,l,w;
	gets(ch);
	l=strlen(ch);
	for(w=1;w<=l;w++)
	{
		for(i=0;i<l-w;i++)
		{
			if(f1(ch,i,i+w))
				f2(ch,i,i+w);
		}
	}
	return 0;
}