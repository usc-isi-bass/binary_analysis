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
	int a[100][100],b[100][100],m[100][100]={0},c,d,e,f,i,j,k,l;
	cin>>c>>d;
	for(i=0;i<c;i++)
		for(j=0;j<d;j++)
		{
			cin>>a[i][j];
		}
	cin>>e>>f;
	for(i=0;i<e;i++)
		for(j=0;j<f;j++)
		{
			cin>>b[i][j];
		}
    for(k=0;k<c;k++)
		for(l=0;l<f;l++)
		{
			for(j=0;j<d;j++)
			{
			  m[k][l]=m[k][l]+a[k][j]*b[j][l];
			}
		}
	for(k=0;k<c;k++)
		{
			for(l=0;l<f-1;l++)
		  {
			cout<<m[k][l]<<" ";
		  }
                 cout<<m[k][f-1];
	        cout<<endl;
	    }
	return 0;
}