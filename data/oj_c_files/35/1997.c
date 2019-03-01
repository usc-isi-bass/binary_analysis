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
	int n,m;
	cin>>n;cin.get();cin>>m;
	int i,j;
	int a[9][9];
	int nmax[9]={0},mmin[9]={9999,9999,9999,9999,9999,9999,9999,9999,9999};
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
			if(a[i][j]>nmax[i])
				nmax[i]=a[i][j];
			if(a[i][j]<mmin[j])
				mmin[j]=a[i][j];
		}
	}
	while(true)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(nmax[i]==mmin[j])
				{
					cout<<i<<'+'<<j<<endl;
					return 0;
				}
			}
		}
		cout<<"No"<<endl;
		return 0;
	}
}