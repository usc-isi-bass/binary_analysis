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


int main(int argc)
{   int i,n,s,a[100];
    cin>>n;        //????n
	i=1;
	while (i<=n)
	{ if (i>=70&&i<80||i%7==0||i%10==7)
	{a[i]=0;}
	else {a[i]=i;}      //??7??????
	i++;}
	i=1;
	s=0;
	while(i<=n)
	{  s=s+a[i]*a[i];
	i++;}        //????
	cout << s;

    
	return 0;
}
