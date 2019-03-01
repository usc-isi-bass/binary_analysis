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
{    int i,n,a[7];
int b[6]={100,50,20,10,5,1};
     cin>>n;
	 for (i=1;i<=6;i++)
	 { a[i]=n/b[i-1];
	 n=n%b[i-1];
	 cout<<a[i]<<endl;}
return 0;
}