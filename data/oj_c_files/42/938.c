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
 * 1.cpp
 *
 *  Created on: 2011-10-21
 *      Author: 1100012797
 */
int main()
{

	int n,no,cal;
	cal=0;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>no;

	for(int k=0;k<n-cal;k++){
		while((a[k]==no)&&(k!=n-cal-1))
		{
			for(int j=k;j<n-cal-1;j++)
				a[j]=a[j+1];
			cal++;

		}
		if((k==n-cal-1)&&(a[k]==no))
			cal++;
	}

	for (int m=0;m<n-cal-1;m++)
		cout<<a[m]<<" ";
	cout<<a[n-cal-1]<<endl;

	return 0;

}
