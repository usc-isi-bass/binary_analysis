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
	char a[81];
	int n,i,len,judge;
	cin >> n;
	cin.get();
	while(n--)
	{
		cin.getline(a,81);
		len=strlen(a);
		if(a[0]=='_'||(a[0]>='a'&&a[0]<='z')||(a[0]>='A'&&a[0]<='Z'))
		{
			judge=1;
			for(i=1;i<=len-1;i++)
			{
				if(a[i]=='_'||(a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]<='9'&&a[i]>='0'))
					judge=1;
				else
				{
					judge=0;
					break;
				}
			}
		}
		else
			judge=0;	
		cout<<judge<<endl;
	}
	return 0;
}