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

int main(void)
{
	char string[200][100];
	int n;
	cin>>n;
	getchar();
	int i;
	for(i=0;i<n;i++)
	{
		cin.getline(string[i],100);
	}
	for(i=0;i<n;i++)
	{
		int k=1;
		for(int j=0;j<strlen(string[i]);j++)
		{
			if(j==0)
			{
				if((string[i][j]=='_')||(string[i][j]>='A'&&string[i][j]<='Z')||(string[i][j]>='a'&&string[i][j]<='z'));
				else
					k=0;
			}
			else
			{
				if(string[i][j]=='_'||(string[i][j]>='A'&&string[i][j]<='Z')||(string[i][j]>='a'&&string[i][j]<='z')||(string[i][j]>='0'&&string[i][j]<='9'));
				else
					k=0;
			}
		}
		if(k==0)
			cout<<0<<endl;
		else
			cout<<1<<endl;
	}
	int a;
	cin>>a;
	return 0;
}