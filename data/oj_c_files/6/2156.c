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
	int n,i,row,col,j,k,sum;
	cin>>n;
	cin.get();
	for (i=0;i<n;i++)
	{
		sum=0;
		row=0;
		col=0;
		int a[103][103]={0};
		cin>>row>>col;
		for (j=0;j<row;j++)
			for (k=0;k<col;k++)
				cin>>*(*(a+j)+k);			//????
		if ((row==1)&&(col==1))
			cout<<**a<<endl;
		else
		{
			for (k=0;k<col;k++)
				sum=sum+*(*a+k);				//?????
			for (k=0;k<col;k++)
				sum=sum+*(*(a+row-1)+k);
			for (j=0;j<row;j++)
				sum=sum+**(a+j);
			for (j=0;j<row;j++)
				sum=sum+*(*(a+j)+col-1);
			sum=sum-**a;
			sum=sum-*(*(a+row-1));
			sum=sum-*(*a+col-1);
			sum=sum-*(*(a+row-1)+col-1);
			cout<<sum<<endl;
		}
	}
	return 0;
}