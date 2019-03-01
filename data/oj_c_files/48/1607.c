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
	int baci[5][9][9]={0};
	int count,days,i,j,k;
	cin>>count>>days;
	baci[0][4][4]=count;
	for(i=0;i<days;i++)
		for(j=0;j<9;j++)
			for(k=0;k<9;k++)
			{
				if(baci[i][j][k]!=0)
				{
					int n=baci[i][j][k];
					baci[i+1][j][k]+=2*n;
					baci[i+1][j-1][k]+=n;
					baci[i+1][j+1][k]+=n;
					baci[i+1][j][k-1]+=n;
					baci[i+1][j][k+1]+=n;
					baci[i+1][j-1][k-1]+=n;
					baci[i+1][j-1][k+1]+=n;
					baci[i+1][j+1][k-1]+=n;
					baci[i+1][j+1][k+1]+=n;				
				}
			}
	for(j=0;j<9;j++)
	{
		cout<<baci[days][j][0];
		for(k=1;k<9;k++)
			cout<<' '<<baci[days][j][k];
		cout<<endl;
	}
	return 0;
}