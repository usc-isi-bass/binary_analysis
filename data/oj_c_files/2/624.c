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
	int n,amount[26],num[26][1000],num0,max=0;
	char a;
	memset(amount,0,sizeof(amount));
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>num0;
		cin.get();
		a=cin.get();
		while(a!='\n')
		{
			num[a-65][amount[a-65]]=num0;
			amount[a-65]++;
			a=cin.get();
		}
	}
	for(int i=0;i<26;i++)
		if(max<amount[i])
			max=amount[i];
	for(int i=0;i<26;i++)
		if(max==amount[i])
		{
			a=i+65;
			cout<<a<<endl<<max<<endl;
			for(int j=0;j<max;j++)
				cout<<num[i][j]<<endl;
			break;
		}
	return 0;
}