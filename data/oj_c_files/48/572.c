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
	int i=0,j=0,m=0,n=0,a[10][10]={0},p=0,k=0,l=0,t=0,q=0;
	cin>>m>>n;
	a[4][4]=m;
	for(p=0;p<n;p++)
	{
	  int b[10][10]={0};
	  for(i=1;i<8;i++)
		  for(j=1;j<8;j++)
		  {
			  b[i][j]=b[i][j]+a[i][j];
			  for(t=-1;t<=1;t++)
				  for(q=-1;q<=1;q++)
					  b[i+t][j+q]=b[i+t][j+q]+a[i][j];
		  }
		  for(i=0;i<9;i++)
			  for(j=0;j<9;j++)
			  {
				  a[i][j]=b[i][j];
			  }

	}
    
	for(i=0;i<9;i++)
	{
		for(j=0;j<8;j++)
			cout<<a[i][j]<<" ";
		cout<<a[i][8]<<endl;
	}

	return 0;
}





