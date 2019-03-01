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

//????
int main()
{
	int n=0,i=0,num[100],temp=0;
	cin>>n;
	for(i=0;i<n;i++)//????
		cin>>num[i];
	for(i=0;i<(n/2);i++)
	{
		temp=num[i];
		num[i]=num[n-1-i];
		num[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
	{
          if(i!=n-1)   
             cout<<num[i]<<" ";
          else
             cout<<num[i];
         }
	return 0;
}