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
	int m ,n , num[100][100];
	cin>>m>>n;
	cout<<endl;
	for (int u=0;u<m;u++)
	{//??????
	   for (int v=0;v<n;v++)
	      cin>>num[u][v];
	   cout<<endl;
	}
	for (int i=0;i<n+m-1;i++)
	{//???????????????????????????????
	   for (int j=0;j<m;j++)
	   {
	      for (int k=0;k<n;k++)
		  {
		     if (j+k==i) cout<<num[j][k]<<endl;
		  }
       }
	}
	return 0;
}

