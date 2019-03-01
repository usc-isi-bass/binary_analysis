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
    int i,n,a[100],b[100];
	cin >> n;
	cin >> a[0] >> b[0];
	for(i=1;i<n;i++)
	{
		cin >> a[i] >> b[i];
		if(20.0*b[i]/a[i]-20.0*b[0]/a[0]>1)
			cout << "better" << endl;
		else if(20.0*b[0]/a[0]-20.0*b[i]/a[i]>1)
			cout << "worse" << endl;
		else cout << "same" << endl;
	}
	return 0;
}