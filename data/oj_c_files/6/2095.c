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
 * bianyuanshuzizhihe.cpp
 *
 *  Created on: 2012-12-13
 *      Author: Lenovo
 */
int main()
{
	int array[100][100];
	int n,sum,row,col;
	int *point;
	point = *array;
	cin>>n;
	for(;n>0;n--)
	{
		sum = 0;
		cin>>row>>col;
		for(point = *array;point<*array + row*col;point++)
			cin>>*point;
		point = *array;
		for(;point<*array+col;point++)
		{
			sum = sum+*point;
		}
		point--;
		for(point=point+col;point<*array + row*col;point=point+col)
		{
			sum = sum+*point;
		}
		point-=col;
		for(point=point-1;point>=*array+ (row-1)*col;point--)
			sum = sum+*point;
		point++;
		for(point=point-col;point>*array;point = point - col)
			sum = sum+*point;
		cout<<sum<<endl;
	}
	return 0;
}
