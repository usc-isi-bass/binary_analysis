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
	int n,a[7],i;
	cin>>n;
	a[1]=(int)(n/100);
	a[2]=(int)((n-a[1]*100)/50);
	a[3]=(int)((n-a[1]*100-a[2]*50)/20);
	a[4]=(int)((n-a[1]*100-a[2]*50-a[3]*20)/10);
	a[5]=(int)((n-a[1]*100-a[2]*50-a[3]*20-a[4]*10)/5);
	a[6]=(int)((n-a[1]*100-a[2]*50-a[3]*20-a[4]*10-a[5]*5)/1);
	for(i=1;i<=6;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

   

 
