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
	int n,x,y=0;
	int a[501],b[501];
	cin>>n;
	for(x=0;x<n;x++){
		cin>>a[x];
	}
	for(x=0;x<n;x++)
	{
		if(a[x]%2!=0){
			b[y]=a[x];
			y++;
		}

	}
	sort(b,b+y);
	cout<<b[0];
	for(x=1;x<y;x++)
		cout<<','<<b[x];
	return 0;
}
