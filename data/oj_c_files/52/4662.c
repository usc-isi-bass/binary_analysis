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

int main(){ //?????
	int m,n; //??n,m
	cin>>n>>m;
	int a[100],i;
	for(i=0;i<n;i++) //??n??
		cin>>a[i];
	int j,temp;
	for(j=0;j<m;j++)
	{
		temp=*(a+(n-m+j));
		for(i=n-m+j-1;i>=j;i--)
			*(a+(i+1))=*(a+i);
		*(a+j)=temp;
		temp=0;
	} //????m????
	for(i=0;i<n-1;i++)
		cout<<*(a+i)<<" ";
	cout<<*(a+(n-1))<<endl;
	return 0;
} //????
