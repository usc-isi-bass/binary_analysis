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

//********************************************************************
//??????K???
//?????????????K???
//??????
//********************************************************************
int main()                             //???


{                                      //?????
	int n, k, num[1000];               //?????????
	cin>>n>>k;
	for(int i = 0; i < n; i++)         //??????
		cin>>num[i];
	int c = 1;                         //???????????
    for(int j = 0; j < n; j++)         //for????????????????
	{
			for(int m = j + 1; m < n; m++)
			{
				                      //??
			     if(num[j] + num[m] == k)
			     {
                      c = 0;         //??????c=0
					  break;         //?????
				 }
			}
			if(c == 0) break;        //??????????
	}
	if(c == 1)
		cout<<"no"<<endl;            //????????
	if(c == 0)
		cout<<"yes"<<endl;
	return 0;
}                                    //?????
