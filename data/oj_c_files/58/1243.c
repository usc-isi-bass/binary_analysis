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
	int n,i;
	char sen[81];
	cin>>n;
	cin.get();
	while ( n-- )
	{
		cin.getline( sen,81 );
		if ( ( sen[0] == '_' ) || ( ( sen[0]<='Z' ) && ( sen[0] >='A' ) ) || ( ( sen[0]<='z' ) && ( sen[0]>='a' ) ) )
		{
			for ( i=1;sen[i] != '\0';i++ )
			{
				if ( ( sen[i] == '_')|| ( ( sen[i]<='Z' ) && ( sen[i] >='A' ) ) || ( ( sen[i]<='z' ) && ( sen[i]>='a' ) ) || ( ( sen[i]<='9' ) && ( sen[i] >='0' ) ) )
				{
					continue;
				}
				else
				{
					cout<<"0"<<endl;
					break;
				}
			}
			if ( sen[i] == '\0' )
			{
				cout<<"1"<<endl;
				continue;
			}
		}
		else
		{
			cout<<"0"<<endl;
			continue;
		}
	}
	return 0;
}