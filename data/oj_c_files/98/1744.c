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

//*******************************
//*???????              **
//*?????? 1300012965     **
//*???20131211              **
//*******************************
int main()
{
	char a[999][41];
	memset(a,0,sizeof(a));
	int n, i, j, count = 0, nlen;
	char *p, *q;
	cin >> n;
	for(i = 1; i <= n; i++)
		cin >> a[i];
	p = *a;
	cout << *(a+1);
	nlen = strlen(a[1]);
	count = nlen;
	for(j = 2; j <= n; j++)
	{
		nlen = strlen(a[j]);
		if(count+nlen+1 <= 80)
		{
			cout << " " << *(a+j);
			count = count+nlen+1;
		}
		else
		{
			count = nlen;
			cout << endl;
			cout << *(a+j);
		}
	}
	return 0;
}