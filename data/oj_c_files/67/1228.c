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
	int i,n;
	double a[100][3];
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>a[i][0]>>a[i][1];
		a[i][2]=a[i][1]/a[i][0];
		if(i!=0)
		{
			if(a[i][2]-a[0][2]>0.05)
			{
				cout<<"better"<<endl;
			}
			else
			{
				if(a[0][2]-a[i][2]>0.05)
				{
					cout<<"worse"<<endl;
				}
				else
				{
					cout<<"same"<<endl;
				}
			}
		}
	}
	return 0;
}