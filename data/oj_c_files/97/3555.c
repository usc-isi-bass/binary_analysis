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
	int p,a[6];
	cin>>p;
	a[0]=p/100;
	a[1]=(p-a[0]*100)/50;
	a[2]=(p-a[0]*100-a[1]*50)/20;
	a[3]=(p-a[0]*100-a[1]*50-a[2]*20)/10;
	a[4]=(p-a[0]*100-a[1]*50-a[2]*20-a[3]*10)/5;
	a[5]=p-a[0]*100-a[1]*50-a[2]*20-a[3]*10-a[4]*5;
	for(int i=0;i<6;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}