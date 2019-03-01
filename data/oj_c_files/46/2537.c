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
	int number[100][100],row=0,col=0,aleft=0,aright=0,bup=0,bdown=0,count=0;      //????
	cin >>row >>col;
	for (int i=0;i<row;i++)                        //????
	{
		for (int j=0;j<col;j++)
			cin >>number[i][j];
	}
	aright=col-1;
	bdown=row-1;
	while(1)                                        //??????????????
	{
		if (count==row*col) break;
		for (int i=aleft;i<=aright;i++)
		{cout <<number[bup][i]<<endl;count++;}
		bup++;
		if (count==row*col) break;
		for (int i=bup;i<=bdown;i++)
		{cout <<number[i][aright]<<endl;count++;}
		aright--;
		if (count==row*col) break;
		for (int i=aright;i>=aleft;i--)
		{cout <<number[bdown][i]<<endl;count++;}
		bdown--;
		if (count==row*col) break;
		for (int i=bdown;i>=bup;i--)
		{cout <<number[i][aleft]<<endl;count++;}
		aleft++;
	}
	return 0;
}