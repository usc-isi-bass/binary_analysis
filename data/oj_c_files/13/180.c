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
	int n,i,j,k,m,t=0;
	cin>>n;
	int N[20000];
	int M[90]={0};
	for (i=0;i<n;i++)
		cin>>N[i];
	for(j=0;j<n;j++)
	{
		for(k=0;k<j;k++)
		{if(N[j]==N[k]) break;}
		if (k==j)
		{M[t]=N[j];t++;}
	}
	for(m=0;m<t-1;m++)
	cout<<M[m]<<" ";
		cout<<M[t-1]<<endl;
	
	return 0;
}