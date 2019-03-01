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

int main()
{
	int n,i,a,sum,m[6]={100,50,20,10,5,1};
	cin>>n;
	sum=n;
	for(i=0;i<6;i++)
	{
      a=sum/m[i];
	  sum=sum-a*m[i];
	  cout<<a<<endl;
	}





return 0;
}

