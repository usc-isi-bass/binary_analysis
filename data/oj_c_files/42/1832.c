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

//***************************
//*???????????  **
//*?????? 1300013007 **
//*???2013.10.30        **
//***************************
int main()
{
	int n;                     //n??????????
	long number, k;             //number????????,k?????????
	cin >> n;
	int a[100000]={0};
	int i, m, p, q, x=0;
	for(i=0; i<n; i++)         //??n???????????????
	{
		cin >> number;
		a[i] = number;
	}
	cin >> k;                  //k??????
	for(m=0; m<n; m++)
	{
		if(a[m] == k)
		{
			for(p=m+1; p<n; p++)   //??k????????
				a[p-1]=a[p];
			m--;                   //????m??????
			n--;
		}
	}
	for(q=0; q<n; q++)
	{
		cout << a[q];
		if(q==n-1)
			cout << endl;
		else
			cout << ' ';
	}
	return 0;
}