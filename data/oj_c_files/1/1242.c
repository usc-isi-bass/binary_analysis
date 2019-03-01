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
 * ????factorization.cpp
 * ??????
 * ????:2012-11-26
 * ???????
 */

int j=2;                                 //??????j

int kinds(int x){                        //????kinds
	int sum=1;
	if(x==1)return 0;                //?????????1????1?????????0
	for(int i=j;i<=sqrt(x);i++)      //?for????x????????1??i??
		if(x%i==0)               //??x???i?????????i??????????
		{
			sum+=kinds(x/i); //??????x/i????
			j=i+1;           //??????i????????x????
		}
	return sum;                      //???????????
}
int main(){                              //???
	int n=0;
	cin>>n;                          //?????????n
	for(int i=0;i<n;i++)
	{
		int x=0;                 //????x
		cin>>x;                  //??x
		cout<<kinds(x)<<endl;    //??x????????kinds
		j=2;                     //??
	}
	return 0;                        //?????
}