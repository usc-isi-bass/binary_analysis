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
	int n=0,a[100][15];
	cin >>n;
	for(int i=0;i<n;i++)
	{
		cin >>a[i][0];
		for(int j=1;j<=a[i][0];j++)
			cin >>a[i][j];
	}
	for(int i=0;i<n;i++)
	{
		if(a[i][0]==0)
			cout <<60 <<endl;
		else
		{
			int num=a[i][a[i][0]]+a[i][0]*3;
			if(num<=60)
				cout <<60-3*a[i][0] <<endl;
			else if(num<=63)
				cout <<a[i][a[i][0]] <<endl;
			else
			{
				int j=1;
				for(j=1;j<=a[i][0];j++)
				{
					num=a[i][j]+j*3;
					if(num>=60&&num<=63)
					{
						cout <<a[i][j] <<endl;
						break;
					}
					else if(num>63)
					{
						cout <<63-j*3<<endl;
						break;
					}
				}
			}
		}
	}
	return 0;
}
