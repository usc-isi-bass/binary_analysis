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
	int x,y,counter=0;
	int num[1000]={0};
	while(cin>>x)
	{
		counter++;
		num[x]++;
		if(cin.get()!=',')
			break;
	}
	while(cin>>y)
	{
		num[y]--;
		if(cin.get()!=',')
			break;
	}
	int max=0,contemperary=0;
	for(int j=0;j<1000;j++)
		{
			contemperary+=num[j];
			if(contemperary>max)
				max=contemperary;
	}
	cout<<counter<<" "<<max;
	return 0;
}
