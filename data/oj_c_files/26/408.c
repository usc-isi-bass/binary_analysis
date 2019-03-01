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
	char a[100],b[100];
	char *p;
	int i,j=1;
	gets (a);
    p=a;
	b[0]=a[0];
	for(i=1;i<100;i++)
	{
		if(*(p+i)==' ')
		{
			if(*(p+i-1)!=' ')
			{
				b[j]=*(p+i);
				j++;
			}
		}
		else
		{
			b[j]=*(p+i);
			j++;
		}
	}
	cout << b << endl;
	return 0;
}
				