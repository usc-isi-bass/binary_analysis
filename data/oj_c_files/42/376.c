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
	int a[100000];
	int n,k,i,j,l;                    //???????????
	l=0;                              //???????????????
	cin>>n;                           //??????????
	for(i=0;i<n;i++)                  //????
		cin>>a[i];
	cin>>k;                         //???????
	i=0;
	while (i<n)
		{
		   if (a[i]==k)                  //??????????
		      {
			    for(j=i+1;j<=n-l;j++)        //???????????
				   {a[j-1]=a[j];}
                a[n-l-1]=0;
			    l=l+1;
                i=i-1;
		      }
		   i=i+1;
		}
	for(i=0;i<n-l-1;i++)                //??
		{cout<<a[i]<<" ";}
	cout<<a[n-l-1];
	return 0;}
