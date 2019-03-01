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
	int n, i, ans=0;
	char s[4];
	cin >> n;
	for (i=1; i<=n; i++)
	{
		sprintf(s,"%d",i);
		if ((s[0]!='7')&&(s[1]!='7')&&(s[2]!='7')&&(s[3]!='7')&&(i%7!=0))
			ans+=i*i;
	}
	cout << ans << endl;
	return 0;
}