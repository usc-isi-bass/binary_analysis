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

char room[101][101];
int po[10000][2];
int m,n,num = 0;
int flu(int day,int n)
{
	int count = 0,flunum = 0,x,y;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			if(room[i][j] == '@')
			{
				po[flunum][0] = i;
				po[flunum][1] = j;
				flunum++;
			}
		}
	}

	for(int k = 0;k < flunum;k++)
	{
		x = po[k][0];
		y = po[k][1];
		if(x > 0 && room[x-1][y] == '.')
		{
			room[x-1][y] = '@';
			count++;
		}
		if(x < n && room[x+1][y] == '.')
		{
			room[x+1][y] = '@';
			count++;
		}
		if(y > 0 && room[x][y-1] == '.')
		{
			room[x][y-1] = '@';
			count++;
		}
		if(y < n && room[x][y+1] == '.')
		{
			room[x][y+1] = '@';
			count++;
		}
	}
	if(day == 1)return count;
	else return count + flu(day-1,n);
}
int main()
{
	cin>>n;
	for(int i = 0;i < n;i++)
	{
		for(int j = 0;j < n;j++)
		{
			cin>>room[i][j];
			if(room[i][j] == '@')
				num++;
		}
	}
	cin>>m;
	cout<<num+flu(m-1,n)<<endl;
	return 0;
}

