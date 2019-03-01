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
	int m=0,n=0; int i=0,j=0,k=0; //??????m,n???????????????????????i,j,k??????0?
	int total[11][11]={{0}},born[11][11]={{0}}; //????total,born??????????????????
	cin>>m>>n; //?????
	total[5][5]=m;
	for(k=0;k<n;k++) //??????
	{
		for(i=1;i<10;i++) //??????????????
		{
			for(j=1;j<10;j++)
				born[i][j]=2*total[i][j]+total[i-1][j]+total[i-1][j-1]+total[i-1][j+1]+total[i][j-1]+total[i][j+1]+total[i+1][j-1]+total[i+1][j]+total[i+1][j+1];
		}
		for(i=1;i<10;i++) //???????
		{
			for(j=1;j<10;j++)
			{
				total[i][j]=born[i][j];
			}
		}
		for(i=1;i<10;i++) //born?????
		{
			for(j=1;j<10;j++)
				born[i][j]=0;
		}
	}
		for(i=1;i<10;i++) //?????
		{
			for(j=1;j<10;j++)
			{
				cout<<total[i][j];
				if(j==9)
					cout<<endl;
				else cout<<" ";
			}
		}
	return 0;
}