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
 * odd numbers.cpp
 *
 *  Created on: 2013-10-30
 *      Author: kongwei
 */
int main()
{
	int N;
	cin>>N;
	int array[N];           //????
	for(int i=0;i<=N-1;i++) //????
		cin>>array[i];
	int g=0;                //????????????????
	int odd[N];          //?????????????
	for(int i=0;i<=N-1;i++)
	{
		if(array[i]%2==1)
		{
			g+=1;           //??array[i]?2???????????????
			odd[g]=array[i];//??????????
		}
	}
	for(int i=1;i<=g-1;i++)     //??????????
		for(int j=1;j<=g-i;j++)
		{
			int t=0;             //??????
			if(odd[j]>odd[j+1])
			{
				t=odd[j];
				odd[j]=odd[j+1];
				odd[j+1]=t;
			}
		}
	for(int i=1;i<=g;i++)//??????????
	{
		if(i==1)
			cout<<odd[i];
		else
			cout<<","<<odd[i];//?????????
	}

	return 0;
}