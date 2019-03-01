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
	int A[2000],B[2000],C[2000],i,j,k,number,max=0;
	char c='e';
	for(i=0;i<2000;i++)
		C[i]=0;
	for(i=0;c!='\n';i++)//??????????????
	{
		cin>>A[i];
		cin.get(c);//????
	}
	c='e';
	for(i=0;c!='\n';i++)
	{
		cin>>B[i];
		cin.get(c);
	}
	for(j=0;j<=i;j++)
       for(k=A[j];k<B[j];k++)
		   C[k]++;
	for(j=0;j<2000;j++)
		if(C[j]>max)
			max=C[j];
	cout<<i<<" "<<max<<endl;
	return 0;
}

