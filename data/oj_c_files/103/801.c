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
	int num=0;
	char st[1100];
	cin>>st;
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]>='a'&&st[i]<='z')
			st[i]=st[i]+'A'-'a';
	}
	for(int i=0;i<strlen(st);i++)
	{
		if(st[i]==st[i+1])
		{
			num++;
		}
		else
		{
			cout<<"("<<st[i]<<","<<num+1<<")";
			num=0;
		}
	}
	return 0;
}


