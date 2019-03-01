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
	int i,n,s=0,a[101];
	cin>>n;
	for (i=1;i<101;i++)  //???7?????a[i]???0
	{
		a[i]=i;
		if (a[i]%7==0)
			a[i]=0;
		if (a[i]>69&&a[i]<80)
			a[i]=0;
		if (a[i]-a[i]/10*10==7)
			a[i]=0;
	}
	for (i=1;i<=n;i++)  //??????n??7??????????
		s+=a[i]*a[i];
	cout<<s<<endl;
	return 0;
}