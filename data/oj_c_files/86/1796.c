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
	cin >> n;
	while(n --)
	{
		int m,input[100];
		int sum=60;
		cin>>m;
		input[0]=0;
		for(int i=1; i<= m;i++)
		{
			cin>>input[i];
			if(input[i]+i*3<=60&&input[i]<60)//?i??????????????60
			{
				sum-=3;
			}
			else if(input[i]+i*3<=63)
				sum=input[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}
