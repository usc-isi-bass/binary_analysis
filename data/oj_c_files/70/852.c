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
	int i,j,n;
	double num[100][2];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>num[i][0]>>num[i][1];
	}
	double max=0,dis=0;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			dis=sqrt((num[i][0]-num[j][0])*(num[i][0]-num[j][0])+(num[i][1]-num[j][1])*(num[i][1]-num[j][1]));
			if(dis>max)
				max=dis;
		}
		cout<<max<<endl;
		return 0;
}
