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

/*
 * array.cpp
 * ??????
 * ????: 2012-12-14
 * ???????????????????????
 */
int main(){
	int row,col,a[100][100];
	cin>>row>>col;
	int i,j;
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
		cin>>a[i][j];//????

	for(i=0;i<col;i++)
	{
		for(j=0;j<row&&i-j>=0;j++)
		{
			cout<<*(*(a+j)+i-j)<<endl;//???????????
		}
	}
	for(i=1;i<row;i++)//???????????
	{
		for(j=col-1;j>=0&&i+col-1-j<row;j--)
		{
			cout<<*(*(a+i+col-1-j)+j)<<endl;
		}
	}
	return 0;//????


}
