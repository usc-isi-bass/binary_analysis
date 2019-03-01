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
	int n,i,j;
	int flag[10000]={0},num[10000]={0};
	cin>>n;
	while(cin>>i>>j)
	{
		if(i == 0 && j == 0)
			break;
		flag[i] = 1;
		num[j] ++;
	}

	for(i = 0;i < n; i++)
	{
		if(flag[i] == 0)
		{
			if(num[i] == n - 1)
				cout<<i<<endl;
			else
				cout<<"NOT FOUND"<<endl;
			break;
		}

	}
	if(i == n)
		cout<<"NOT FOUND"<<endl;

    return 0;
}
