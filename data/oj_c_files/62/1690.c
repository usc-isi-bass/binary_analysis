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
	char a[201];
	cin.getline(a,201);
	int len,f=0;
	len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]!=' ')
		{
			f=1;
			cout<<a[i];
		}else 
		{
			if(f==1)
			{
				cout<<' ';
				f=0;
			}
		}
	}
	return 0;
}