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

/************************/
/*        ????      */
/*    ??? pyyaoer    */
/*   ??  2011.11.26   */
/************************/
void yinshu(int);
int sum=1,j=2;
int main()
{
	int n,m;
	int i;
	cin>>n;
	for (i=1;i<=n;i++)     //?i????
	{
		cin>>m;
		yinshu(m);         //????
		cout<<sum<<endl;
		sum=1,j=2;
	}
	return 0;
}
void yinshu(int mm)        //?????
{
	int k;
	for (k=j;k*k<=mm;k++)  //????
	{ 
		if (mm%k==0)
		{
			sum=sum+1;
			j=k;
			yinshu(mm/k);  //???????
		}
	}
}