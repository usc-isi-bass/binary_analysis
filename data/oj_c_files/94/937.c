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

//**********************************
//****       ??????     *****
//****        1200016612       *****
//**      ?????????      **
//**********************************
int main()                                                          //?????
{
	int N=0,a[500],b[500],i=0,j=0,k=0,t=0;                          //a[500]???????b[500]????
	cin>>N;
	for(i=0;i<N;i++)                                                //??????????????b[500]????
	{
		cin>>a[i];
		if(a[i]%2!=0)
		b[j++]=a[i];
	}
	for(i=1;i<=j-1;i++){                                          //????????
		for(k=0;k<j-i;k++){                                       //????????
			if(b[k]>b[k+1]) 
			{
				t=b[k];
				b[k]=b[k+1];
				b[k+1]=t;
			}
		}
	}
	cout<<b[0];                                                      
	for(k=1;k<j;k++)
	{
		cout<<","<<b[k];
	}
	return 0;
}