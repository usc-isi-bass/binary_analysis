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

//**********************************************************
//*   ?  ?   ?: ????.cpp                            *
//*   ?       ?: ? ?                                   *
//*   ? ? ? ?: 2010?10?12?                          *
//**********************************************************
int main()
{
	int n=0,i=0,j=0,a[100][100];
		cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<100;j++)
			a[i][j]=0;
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<=a[i][0];j++)
			cin>>a[i][j];
	}
	for(i=0;i<n;i++)
	{
		for(j=99;j>=1;j--)
		{
			if(a[i][0]==0)
			{
				cout<<60<<endl;
			    break;
			}
			else if(a[i][j]!=0)
			{
				if(((a[i][j]+j*3)<=60)&&(a[i][j+1]==0))
				{
				    cout<<60-j*3<<endl;
				    break;
				}
				else if(((a[i][j]+j*3)<=60)&&((a[i][j+1]+j*3)>=60)&&a[i][j+1]!=0)
				{
				    cout<<60-j*3<<endl;
				    break;
				}
				else if(((a[i][j]+j*3)<=60)&&((a[i][j+1]+j*3)<60))
				{
					cout<<a[i][j+1]<<endl;
				    break;
				}
			}
		}
	}
	return 0;
}