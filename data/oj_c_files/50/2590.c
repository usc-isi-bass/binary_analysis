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

//**************************************
//?????????                   *
//?????                           *
//???2013/10/30                     *
//????????????????     *
//**************************************
int main()
{
    int w;
	cin>>w;
	int A[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},B[13]={0,13,13,13,13,13,13,13,13,13,13,13,13};
	for(int i=1;i<13;i++)
	{
		for(int j=0;j<i;j++)
		{
			B[i]=B[i]+A[j];
		}
		if((B[i]+w-1)%7==5)
			cout<<i<<endl;
	}
	return 0;
}