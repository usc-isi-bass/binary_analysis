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
	char t[85],in[45];
	char *p = t, *q = in;
	int n;
	cin>>n;
	int i,sum = 0,len,j,k = 0;

	for(i = 0; i < n; i ++)
	{
		cin>>in;

		q = in;
		k = 0;

		len = strlen(in);

		while(*q != '\0')
		{
			*p++ = *q++;
			k++;
			sum ++;

			if(sum > 80)
			{
				p = p - k;
				sum -= k;

				if(*(p-1) == ' ')
				{
					p --;
					sum --;
				}

				q = in;
				k = 0;

				*p = '\0';
				cout<<t<<endl;

				p = t;
				sum = 0;

				while(*q != 0)
				{
					*p++ = *q++;
					k++;
					sum ++;
				}
			}
		}
		if(sum < 80)
		{
			*p = ' ';
			p++;
			sum ++;
		}
	}
	p--;
		*p = '\0';
		cout<<t;
	return 0;
}