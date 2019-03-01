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
	int num[9][9]={0};
	int t;cin>>num[4][4]>>t;
	for(int i=0;i<t;i++)
	{
		int beifen[9][9]={0};
		for(int j=0;j<9;j++)
		{
			for(int k=0;k<9;k++)
			{
				if(num[j][k]!=0)
				{
					beifen[j][k]+=num[j][k]*2;
					beifen[j][k+1]+=num[j][k];
					beifen[j][k-1]+=num[j][k];
					beifen[j+1][k+1]+=num[j][k];
					beifen[j-1][k+1]+=num[j][k];
					beifen[j-1][k-1]+=num[j][k];
					beifen[j+1][k-1]+=num[j][k];
					beifen[j+1][k]+=num[j][k];
					beifen[j-1][k]+=num[j][k];
				}
			}
		}
		for(int j=0;j<9;j++)
		{
			for(int k=0;k<9;k++)
				num[j][k]=beifen[j][k];
		}
	}
	for(int i=0;i<9;i++)
	{
		for(int j=0;j<8;j++)
		{
			cout<<num[i][j]<<' ';
		}
		cout<<num[i][8]<<endl;
	}
	
	return 0;
}