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
	int num=0,i=0;
	char c,st[100][100];
	while(1)
	{
		cin>>st[i];
		i++;
		num++;
		c=cin.get();
		if(c==' ')
			continue;
		break;
	}
	for(i=num-1;i>0;i--)
	{
		cout<<st[i]<<" ";
	}
	cout<<st[0]<<endl;
	return 0;
}