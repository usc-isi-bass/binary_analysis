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

int main()                                            //?????
{
	int n;                                            //????n
	cin>>n;                                           //????n
	int a[100];                                       //????a
	for(int i = 0 ; i < n ; i++)                      //????a
	{
		cin>>a[i];                                    
	}
	for(int j = n-1 ; j >= 0 ; j--)                   //??????a
	{
		if(j!=0)
		cout<<a[j]<<" ";
		if(j==0)
		cout<<a[j]<<endl;
	}
	return 0;                                         //???????????????????
}





		

