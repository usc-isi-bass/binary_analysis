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
 * juzhenboss__006.cpp
 *?????????
 *  Created on: 2011-11-6
 *      Author: ???
 */
int main ()//?????
{
	int a[50][50][50];
	int max[101]={0};
	int i,j,k,m,n,min,t=0;
	cin>>n;//???????
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			for (k=1;k<=n;k++)
				cin>>a[i][j][k];//??n?n???
	for (i=1;i<=n;i++)//?n?????????????????
	{
	  for (t=0;t<n-1;t++)//t??????
	  {
	  for (j=1;j<=n-t;j++)//?????????????????,?t????????
	  {
		  min=a[i][j][1];

		  for (k=1;k<=n-t;k++)
		  {
			 if (min>a[i][j][k])
				 min=a[i][j][k];

		  }
		  for (k=1;k<=n-t;k++)
			  a[i][j][k]=a[i][j][k]-min;

	  }
	  for (k=1;k<=n-t;k++)//?????????,?????
	  {
		  min=a[i][1][k];//???
		  for (j=1;j<=n-t;j++)
		  {
			  if (min>a[i][j][k])
				  min=a[i][j][k];
		  }
		  for (j=1;j<=n-t;j++)
			  a[i][j][k]=a[i][j][k]-min;
      }
	  max[i]=max[i]+a[i][2][2];//?????????
	  for (j=2;j<=n-t-1;j++)//??2????
	  {
		 for (k=1;k<=n-t;k++)
		 {
			 a[i][j][k]=a[i][j+1][k];
		 }
	  }
	  for (k=2;k<=n-t-1;k++)//???????
	  {
		  for (j=1;j<=n-t;j++)
			  a[i][j][k]=a[i][j][k+1];
	  }


	}
	}
	for (i=1;i<=n;i++)//??
		cout<<max[i]<<endl;
	return 0;
}
