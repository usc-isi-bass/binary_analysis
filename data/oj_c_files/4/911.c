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

//***********************************************************************
//??????????
//??????
//***********************************************************************
int  array[100][100];
void out1(int row, int col)
{
	int *p;                                       //????
	for(int i = 0; i < row; i++)                  //?????
	{
		p = array[i];                             
		cin>>*p;
		for(int j = 1; j < col; j++)
			cin>>*++p;
	}
	for(int i = 0; i < col; i++)                  //????????????????????
	{
		p = &array[0][i];                         //?????
		cout<<*p<<endl;
		for(int j = 1; j <= i; j++)
		{
			p = p + 99;
			cout<<*p<<endl;
		}
	}
	for(int i = 1; i < row - col; i++)
	{
		p = array[i];
		p = p + col - 1;
		cout<<*p<<endl;
		for(int j = 1; j < col; j++)
		{
			p = p + 99;
			cout<<*p<<endl;
		}
	}
	for(int i = row - col; i < row; i++)
	{
		p = array[i];
		p = p + col - 1;
		cout<<*p<<endl;
		for(int j = 1; j < row - i; j++)
		{
			p = p + 99;
			cout<<*p<<endl;
		}
	}
}
void out2(int row, int col)
{
	int *p;
	for(int i = 0; i < row; i++)
	{
		p = array[i];
		cin>>*p;
		for(int j = 1; j < col; j++)
			cin>>*++p;
	}
	for(int i = 0; i < row; i++)
	{
		p = &array[0][i];
		cout<<*p<<endl;
		for(int j = 1; j <= i; j++)
		{
			p = p + 99;
			cout<<*p<<endl;
		}
	}
	for(int i = row; i < col; i++)
	{
		p = array[0];
		p = p + i;
		cout<<*p<<endl;
		for(int j = 1; j < row; j++)
		{
			p = p + 99;
			cout<<*p<<endl;
		}
	}
	for(int i = 1; i < row ; i++)
	{
		p = array[i];
		p = p + col - 1;
		cout<<*p<<endl;
		for(int j = 1; j < row - i; j++)
		{
			p = p + 99;
			cout<<*p<<endl;
		}
	}
}
int main()
{
	int row, col;
	cin>>row>>col;
	if(row > col)
		out1(row, col);
	else 
		out2(row, col);
	return 0;
}