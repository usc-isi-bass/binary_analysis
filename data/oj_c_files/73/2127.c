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
	int num[6][6]={0},maxLine[6]={0},minRow[6]={0},i,j;
	for(i=1;i<=5;i++)
	{
		for(j=1;j<=5;j++) cin>>num[i][j];     //?????????num??????maxLine?minRow???????????????????????????
	}


		for(i=1;i<=5;i++)
	{

		for(j=1;j<=5;j++) 
		{
			if(num[i][j]>=num[i][1] 
			&&num[i][j]>=num[i][2] && num[i][j]>=num[i][3] && num[i][j]>=num[i][4] && num[i][j]>=num[i][5])
				maxLine[i]=j;
		}
	}                                       //???????????????????maxLine??

		for(j=1;j<=5;j++)
		{
			for(i=1;i<=5;i++)
			{
				if(num[i][j]<=num[1][j] && num[i][j]<=num[2][j] && num[i][j]<=num[3][j] 
				&& num[i][j]<=num[4][j] && num[i][j]<=num[5][j])
					minRow[j]=i;
			}
		}                                   //????????minRow??

		int counter=0;                      //???counter????????
		for(i=1;i<=5;i++)
		{
			if (i==minRow[maxLine[i]] )
			{
				counter++;
				cout<<i<<" "<<maxLine[i]<<" "<<num[i][maxLine[i]]<<endl; //??????????????maxLine,minRow??????????????
			}
		}
		if(counter==0) cout<<"not found";      //???????notfound.
	return 0;
}
