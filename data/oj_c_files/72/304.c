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
	int m,n,i,j;
	int hill[21][21]={0};
	cin>>m>>n;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>hill[i][j];
		}
	}
    


	for(j=1;j<n-1;j++)
		if(hill[0][j]>=hill[0][j-1]&&hill[0][j]>=hill[0][j+1]&&hill[0][j]>=hill[1][j])


	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==0&&j==0&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j+1])
			    cout<<i<<" "<<j<<endl;
			else if(i==0&&j<n-1&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j+1]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			else if(i==0&&j==n-1&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			else if(i>0&&i<m-1&&j==0&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
			else if(i==m-1&&j==0&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
			else if(i==m-1&&j<n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i][j-1]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
			else if(i==m-1&&j==n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			else if(i<m-1&&j==n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j-1])
				cout<<i<<" "<<j<<endl;
			
			
			else if(i>0&&i<m-1&&j>0&&j<n-1&&hill[i][j]>=hill[i-1][j]&&hill[i][j]>=hill[i+1][j]&&hill[i][j]>=hill[i][j-1]&&hill[i][j]>=hill[i][j+1])
				cout<<i<<" "<<j<<endl;
		}
	}
	
	return 0;
}