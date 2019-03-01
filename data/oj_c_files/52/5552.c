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
	int n,m;
    cin>>n>>m;
    
    int a[100];
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	m %= n;
	int *p = a;
	while ( m!=0 )
    {
		int t=*(a+n-1);
		for(p=a+n-1; p>a; p--)
            *p = *(p-1);
		*p = t;
		m--;
	}
    
    for (p=a; p < a + n-1; p++)
		cout << *p <<' ';
    p=a;
    p = a + n-1;
    cout<< *p;
    
	cout<<endl;
    return 0;
}
