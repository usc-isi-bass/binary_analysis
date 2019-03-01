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

//*************************************
//*?????? 1300012809           **
//*************************************
int main()
{
 int n,k,u,sum,panduan ;                        //????“??”????????7??
 cin >> n ;
 sum = 0;
 int i ;
 for (i=1;i<=n;i++)
 {
     k=i/10 ;
     u=i%10 ;
	 panduan = 0;                               //??????=0
     if (k==7) panduan=1;
	 if (u==7) panduan=1;
	 if (i%7==0) panduan=1;
     if (panduan==0)                            //???7???????sum?
	 {
		 sum = sum + i*i ;
	 }
 }
 cout << sum << endl;
 return 0 ;
}