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

/*&#206;&#210;&#213;&#230;&#207;&#235;&#214;�&#189;&#211;�&#180;�&#197;&#202;&#228;&#179;&#246;&#193;&#203;&#161;&#173;&#161;&#173;&#181;&#171;&#202;&#199;&#196;&#199;&#204;&#171;&#178;&#187;&#181;&#192;&#181;&#194;&#193;&#203;&#205;&#219;&#185;&#254;&#185;&#254;&#185;&#254;*/
int main()
{
	int tmp,t,n,a[100];
	cin>>n;
	t=n/2-1;
	for (int i=0; i<=n-1; ++i) cin>>a[i];
	for (int i=0; i<=t; ++i)
	{
		tmp=a[n-1-i];
		a[n-1-i]=a[i];
		a[i]=tmp;
	}
	cout<<a[0];
	for (int i=1; i<=n-1; ++i) cout<<' '<<a[i];
	return 0;
}