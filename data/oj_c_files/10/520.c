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
	int N;
	int a[30]={0},f[30]={0};
	cin >> N;
	for (int i=0; i< N ; i++)
	{
		cin >> a[i];
		f[i]=1;
	}
	int ans = 0;
	for (int i=1; i<N;i++)
	{
		int mx=0;
		for (int j=0;j<i;j++)
			if (a[j]>=a[i] && f[j]>mx)
				mx = f[j];
		f[i]= mx+1;
		if (ans < f[i]) ans = f[i];
	}
	cout << ans << endl;
	return 0;
}