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
	int n,a[100000],k;//???????????
	int i,p=0;
	cin>>n;
	for(i=0; i<n; i++)
		cin>>a[i];
	cin>>k;

	for (i=0; i<n; i++)
        if (a[i]!=k) a[p++]=a[i];

    for (i=0; i<p-1; i++)
        cout<<a[i]<<" ";
    if (p>0) cout<<a[p-1]<<endl;

	return 0;
}
