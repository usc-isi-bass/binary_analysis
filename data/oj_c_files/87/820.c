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
    int sum,a,b,c,d,e,f;
	while(cin>>a>>b>>c>>d>>e>>f&&(a!=0||b!=0||c!=0||d!=0||e!=0||f!=0))
	{
		sum=(d+12-a)*3600+(e-b)*60+f-c;
		cout<<sum<<endl;
	}
	return 0;
}
