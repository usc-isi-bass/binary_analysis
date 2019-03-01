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
	int max,sec;
	int s,t;
	int i,j,k,l;
	char c;
	cin>>max;
	c=cin.get();
	if(c=='\n')
	{
		cout<<"No"<<endl;
	}
	else
	{
		cin>>sec;
		c=cin.get();
		if(max<sec) {t=max;max=sec;sec=t;}
		if(c=='\n')
		{
			if(sec<max) cout<<sec<<endl;
			else cout<<"No"<<endl;
		}
		else
		{
			for(;;)
			{
				cin>>s;
				c=cin.get();
				if(s>max)
				{
					sec=max;
					max=s;
				}
				
				else if(s>sec&&s!=max) sec=s;
				else if(s<sec&&sec==max) sec=s;
				if(c=='\n')
				{
					if(sec==max) cout<<"No"<<endl;
					else cout<<sec<<endl;
					break;
				}
			}
		}
	}
	return 0;
}