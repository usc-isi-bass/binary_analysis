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

	
	int a[100][3]={0},b[100]={0},i,n,sum=0;

	cin>>n;
	
	for(i=0;i<n;i++)

	{

		a[i][0]=i+1;

		a[i][1]=a[i][0]%10;

		a[i][2]=a[i][0]/10;

	}

	for(i=0;i<n;i++)

	{

		if(a[i][0]%7!=0&&a[i][1]!=7&&a[i][2]!=7)

			b[i]=a[i][0];

	}

	for(i=0;i<n;i++)

		sum=sum+b[i]*b[i];

	cout<<sum;



	return 0;

}