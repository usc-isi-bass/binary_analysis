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

int main( )
{
	char s[250][50]={0};
	int n,i,c;
	cin>>n;
	cin.get();
	for(i=0;i<n;i++)
	{
		cin>>*(s+i);
	}
	c=0;
	i=0;
	while(i<n)
	{
		if(c+strlen(*(s+i))+1>80)
		{
			cout<<endl;
			c=0;
		}
		else if(c+strlen(*(s+i))+1<=80&&c==0)
		{
			cout<<*(s+i);
			c+=strlen(*(s+i));
			i++;
		}
		else if(c+strlen(*(s+i))+1<=80)
		{
			cout<<" "<<*(s+i);
			c+=strlen(*(s+i))+1;
			i++;
		}

	}
		return 0;
}
