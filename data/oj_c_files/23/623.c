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
	char a[5000];
	cin.getline(a,5000);
	int i=0,j=0,m;
	m=strlen(a);
	for(i=m-1;i>=0;i--)
	{
		if (a[i]==' ')
		{
			j=i+1;
			while((a[j]!=' ')&&(j<m))
			{
				cout<<a[j];
				j++;
			}
			cout<<" ";
		}
		if (i==0)
		{
					j=i;
					while((a[j]!=' ')&&(j<m))
					{
						cout<<a[j];
						j++;
					}

				}
	}

	return 0;
}
