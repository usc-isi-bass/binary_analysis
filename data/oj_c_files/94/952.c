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

//*********************************
//    ??????????        *
//    ??????                *
//    ?????2012.10           *
//*********************************
int main()                               //?????
{
	int a[500],b[500];                   //????
	int N,i=1,j=1,k=1,p;                 //????????N?????i,j,k?????p
	cin>>N;
	for(i=1;i<=N;i++)                    //?a[]??
	{
		cin>>a[i];
	}
	for(i=1;i<=N;i++)                    //?????????b[]
	{
		if(a[i]%2==1)
		{
			b[j]=a[i];
			j++;
		}
	}
	for(i=1;i<=j-2;i++)                  //????????b[]??
	{
		for(k=1;k<=j-1-i;k++)
		{
			if(b[k]>b[k+1])
			{
				p=b[k];
				b[k]=b[k+1];
				b[k+1]=p;
			}
		}
	}
	for(i=1;i<=j-2;i++)                  //???????
	{
		cout<<b[i]<<",";
	}
	cout<<b[j-1]<<endl;
	return 0;
}