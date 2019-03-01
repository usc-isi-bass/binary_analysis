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
	int n,a[100001],k,i,j;			//????
	cin >> n;						//??????
	for (i=1;i<=n;i++)				//??????
		cin >> a[i];
	cin >> k;						//?????????k
	i=1;
	while (i<=n)
		if (a[i]==k)				//????????
			{
				for (j=i;j<=n;j++)	//????
					a[j]=a[j+1];
				n=n-1;				//??????
			}
		else i++;
	for (i=1;i<=n-1;i++)			//????
		cout << a[i] << " ";
	cout << a[n];
	return 0;						//????
}