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

int main ()
{
	char a[100];
	cin.getline ( a,100 );
	int l=strlen (a);
	for ( int i=0; i<l; i++ )
		{
			if ( a[i]!=' ' )
			cout<<a[i];
			else
			{
				cout<<' ';
				while (1)
				{
					if ( a[i+1]!=' ' )
					{
						cout<<a[i+1];
						i=i+1;
						break;
					}
					else
					{
						i++;
						continue;
					}
				}
			}
		}
			return 0;
}
