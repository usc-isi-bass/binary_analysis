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
	int t;
	char c[110][1009];
	int mark[110][300]={0},flag[110]={0};
	cin>>t;
	cin.get();
	for(int i=0;i<t;i++)
	{
		gets(c[i]);

	}
	for(int i=0;i<t;i++)
	{
		for(int j=0;j<strlen(c[i]);j++)
		{
			mark[i][c[i][j]-'a']++;
		}
		for(int x=0;x<strlen(c[i]);x++)
		{
			if(mark[i][c[i][x]-'a']==1)
			{
				
				cout<<c[i][x]<<endl;
				flag[i]=1;
				break;
			}
		}
		if(flag[i]==0) cout<<"no"<<endl;
	}

	return 0;

}