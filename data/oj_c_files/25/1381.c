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
 *@file 5.cpp
 *@author ??? 
 *@date 11.15
 *@description ??2?n??
 */

int main ()
{ 
	int a[1000]={0}; //????????????????????
	int i,n,temp=0; 
	int N; 
	
	a[0]=1; //???????1
	cin >> N;

	for(n = 1; n <= N; n++) 
	{ 
		for(i = 0; i < 1000; i++) 
			a[i]*=2; //??????????2
		for(i = 0; i < 1000; i++) 
		{
			if(a[i] > 9) 
			{ 
				a[i] = a[i] % 10; //?????2???9???? 
				a[i+1]+=1; 
			}
		}
	} 

	for(i = 999; i >= 0; i--) 
	{ 
		if(a[i]!=0) 
		{
			temp=i; //????????????0???
			break; 
		} 
	} 

	for(i = temp; i >= 0; i--) 
		cout << a[i];

 return 0;  
}