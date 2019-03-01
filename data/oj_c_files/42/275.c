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
 * ???? 1000012845_25.cpp
 * ???????
 * ????: 2010-10-29
 * ???????????
 */

int main() //???
{   //?????
	int n,i,j=0,k,m;  //??n,i,j,k,m???
	cin>>n;
	int a[n];  //????
	for(i=0;i<n;i++)
	{
	 cin>>a[i];  //????
	}
	cin>>k;
    for(i=0;i<n;i++)
    {               //????
        if(a[i]==k)
        {
        	for(m=i;m<n;m++)
        	{a[m]=a[m+1];}
        	i--;
        	j++;
        }           //?????
    }
    for(i=0;i<n-j;i++)
    	{
    	cout<<a[i];
    	if(i!=n-j-1)
    		cout<<" ";
    	}
        cout<<endl;  //????
    return 0;
}   //?????