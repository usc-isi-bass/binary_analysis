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
	char c[100];
	int i,j,k;
	cin.getline(c,100);
	k=strlen(c)-1;
	for(i=strlen(c)-1;i>=0;--i)
	{
		if(c[i]==' ') 
		{
			for(j=i+1;j<=k;++j)
			{
				cout<<c[j];
			}
			k=i-1;
			cout<<" ";
		}
	}
	for(i=0;i<=k;++i)
	{
		if(c[i]==' ')
			break;
		else cout<<c[i];
	}
		

	return 0;
}
