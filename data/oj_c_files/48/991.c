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

//????

int chess[15][15]={0};
int d;

int f(int i,int j,int k)
{
	if(i<1||i>9||j<1||j>9) return 0;
	if(k==0) return chess[i][j];
	return f(i,j,k-1)*2+f(i,j-1,k-1)+f(i,j+1,k-1)+f(i+1,j,k-1)+f(i-1,j,k-1)+f(i-1,j-1,k-1)+f(i-1,j+1,k-1)+f(i+1,j-1,k-1)+f(i+1,j+1,k-1);
}

int main()
{
	cin>>chess[5][5]>>d;
	int i,j;

	for(i=1;i<=9;i++)
	{
		cout<<f(i,1,d);
		for(j=2;j<=9;j++)
		{
			cout<<" "<<f(i,j,d);
		}
		cout<<endl;
	}
	return 0;
}