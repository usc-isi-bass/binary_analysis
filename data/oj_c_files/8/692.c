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
	int length[2]={0},a[2][100]={0},i,j,t,m;
	cin>>length[0]>>length[1];
	for (i=0;i<2;i++)
		for (j=0;j<length[i];j++)
			cin>>a[i][j];
	for (i=0;i<2;i++)
		for (m=1;m<length[i];m++)
			for (j=0;j<length[i]-m;j++)
				 if (a[i][j]>a[i][j+1])
				{
					t=a[i][j];
					a[i][j]=a[i][j+1];
					a[i][j+1]=t;
				}
	for (j=0;j<length[0];j++)
		cout<<a[0][j]<<" ";
	cout<<a[1][0];
	for (j=1;j<length[1];j++)
		cout<<" "<<a[1][j];
	return 0;
}