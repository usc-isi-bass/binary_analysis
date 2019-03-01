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

//1000012915???
int f(int a,int min);
int main()
{
	int n,i,a,A[100];        //????

	cin>>n;
	
	for(i = 0;i < n;i++)     //??
	{
		cin>>a;
		A[i]=f(a,2);         //?2?????
	};

	for(i = 0;i < n;i++)cout<<A[i]<<endl; //??
	return 0;
}


int f(int a,int min)
{ 
	int result = 1; 
	int i;

	if(a < min)                 //?min?a?????????a????????
	{ 
		return 0; 
	} 
	
	for(i = min;i<a;i++)        //???????????????n???
	{ 
		if(a % i == 0)
		{ 
			result += f(a/i,i); //????????????????????????x???
		} 
	} 
	return result; 
} 