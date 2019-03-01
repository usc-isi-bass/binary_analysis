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
	int board[11][11][2]={0},i,j,k;
	int m,n;//m???????????n???????
	cin>>m>>n;
	board[5][5][0]=m;

	for(k=1;k<=n;k++){
		for(i=1;i<=9;i++){
			for(j=1;j<=9;j++)
			{
			    board[i][j][1]=board[i][j][0]*2+board[i-1][j-1][0]+board[i-1][j][0]+board[i-1][j+1][0]+board[i][j-1][0]+board[i][j+1][0]+board[i+1][j-1][0]+board[i+1][j][0]+board[i+1][j+1][0];
			}}
		for(i=1;i<=9;i++){
			for(j=1;j<=9;j++){
			board[i][j][0]=board[i][j][1];
			}}}

	    for(i=1;i<=9;i++)
		{
			cout<<board[i][1][1];
			for(j=2;j<=9;j++)
			{
				cout<<' '<<board[i][j][1];
			}
		    cout<<endl;
		}
	return 0;}