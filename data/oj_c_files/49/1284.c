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
	char c[500];
	cin>>c;
	for(int i=2;i<=strlen(c);i++)
	{
		for(int j=0;j<=strlen(c)-i;j++)
		{
			int p=1;
			for(int k=j;k<j+i/2;k++)
			{
				
				if(c[k]!=c[j+j+i-1-k])
				{
					p=0;
					break;
				}
				
			}
			if(p==1)
			{
				for(int o=j;o<j+i;o++)
				{
					cout<<c[o];
				}
				cout<<endl;
			}
		}
	}



	return 0;
}