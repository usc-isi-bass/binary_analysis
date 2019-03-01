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
 * ????array.cpp
 * ????: 2012-12-11
 * ??: winneshaw
 * ???????row?col??????array
 * ???array[0][0]?????????????????????????
 */


int main(){
	int row,col;
	cin>>row>>col;
	int array[row][col];
	int j,i,k;
	int*p=NULL;
	for(j=0;j<row;j++)
	{
	p=array[j];
	for(i=0;i<col;i++)
		cin>>*(p+i);
	}
	p=array[0];
	for(k=0;k<=row+col-2;k++)
	for(i=0;i<row;i++)
		for(j=0;j<col;j++)
     if(i+j==k)
			cout<<*(p+i*col+j)<<endl;
	return 0;
}
