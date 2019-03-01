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

	char c;
void get()
{
	
	c=cin.get();
	if(c<='z'&&c>='a')
		c=(char)(  (int)c-'a'+'A'  );
}

int main()
{
	char a[1000]={0};
	int b[1000]={0};


	get();
	int i=0;
	a[i]=c;
	b[i]++;

	get();
	while(c!='\n')
	{
		if(c==a[i])
			b[i]++;
		else
		{
			i++;
			a[i]=c;
			b[i]++;
		}
		get();
	}

	for(i=0;b[i]!=0;i++)
	{
		cout<<"("<<a[i]<<","<<b[i]<<")";
	}


	return 0;
}