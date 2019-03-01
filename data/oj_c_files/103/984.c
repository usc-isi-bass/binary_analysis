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
	char a[1100]={0};
	int i, ans=1;
	cin >> a;
	for (i=0; i<(int)strlen(a); i++)
		if ((a[i]>='a')&&(a[i]<='z'))
			a[i]=a[i]-'a'+'A';
	cout << '(' << a[0] << ',';
	for (i=1; i<(int)strlen(a); i++)
	{
		if (a[i]==a[i-1])
			ans++;
		else
		{
			cout << ans << ")(" << a[i] << ',';
			ans=1;
		}
	}
	cout << ans << ')' << endl;
	return 0;
}