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

//****************************************************************
// ????1000012789_2.cpp                                      *
// ???wusy                                                    *
// ???10?27                                                  *
// ???????????                                        *
//****************************************************************
int main()
{
	int n, a[100001], k, q, count1 = 0, count2 = 0;     //????????????
	cin >> n;                                           //count1?count2,q????

	for(int i = 0; i <= n-1; i++)                       //??????
		cin >> a[i];
 	cin >> k;

	if(a[0] != k)                                       //??1???k????a[0]
	{
		cout << a[0];

		for(int j = 1; j <= n-1; j++)                   //??????k??
		{
			if(a[j] == k)                               //???
			{
				for(int e = j; e <= n-1; e++)             //????????
				a[e] = a[e+1];

				count1 ++;                              //????1
				j -- ;                                  //j-1?????
			} 
		}
			for(int f = 1; f <= n-count1-1; f++)        //????????n-count1-1
				cout << " " << a[f];
	}

	if(a[0] == k)                                       //??1??k?
	{
		for(int m = 1; m <= n-1; m++)                   //?????????????k
		{
			if(a[m] != k)                               //??k?
			{	
				q = m;
				break;                                  //q???????
			}
		}
		cout << a[q];                                   //??a[q]

		for(int t = q+1; t <= n-1; t++)                 //???a[0]!=k???,????          
		{
			if(a[t] == k)                               
			{
				for(int h = t; h <= n-1; h++)             
					a[h] = a[h+1];

					count2 ++;
					t -- ;
			}
		}
		for(int o = q+1; o <= n-count2-1; o++)          //??????n-count2-1
			cout << " " << a[o];
	}
	return 0;
}



