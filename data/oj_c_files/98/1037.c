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
	int n;
	cin>>n;
	char p[1][20];
	cin>>(*p);
	int len=strlen(*p);
	cout<<(*p);
	for(int i=1;i<n;i++)
	{
		cin>>(*p);
		if(len+strlen(*p)+1>80)
		{
			cout<<endl<<(*p);
			len=strlen(*p);
		}
		else
		{
			cout<<' '<<(*p);
			len+=strlen(*p)+1;
		}
	}
	return 0;
}