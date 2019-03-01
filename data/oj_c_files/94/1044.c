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

/*
	name : ??(14-3) ?????? 
	author : 1200012757(chenminhuan)
	Data : 11/04/2012 0:26
*/


int main()
{
	int N,cnt=0;
	int a[500+10];	
	cin>>N;
	
	for (int i = 0 ; i < N ;++i) 	    //??n??
	{		
		cin>>a[i];
		if (a[i]%2)		    //mod 2?1?????
			a[cnt++]=a[i];
	}
	
	sort(a, a+cnt);
	
	for (int i =0 ; i < cnt ; ++i) 
	{
		if (i) cout << ",";
		cout << a[i];
	}
	return 0;
}