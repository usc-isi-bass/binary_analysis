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
	char a[100],v;int number=0,c,m=1,an_number=0;
	cin>>c;
	const int max=80;
	while(m)
	{
		while(number<=max)
		{
			cin>>a;
			an_number+=1;
			if(number==0)
			{
				cout<<a;
				number=number+strlen(a);
			}
			else if(number+strlen(a)+1<=max)
			{	
				cout<<' '<<a;
				number=number+strlen(a)+1;
			}
			else break;
			if(an_number==c)
			{
				m=0;
				break;
			}
		}
		if(an_number!=c)
		{
			cout<<endl;
			cout<<a;
			number=strlen(a);
		}
	}
	return 0;
}