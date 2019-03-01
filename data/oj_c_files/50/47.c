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

int  main()
{
    int k,i;
	cin>>k;
	int a[13]={0,13,31+13,31+28+13,28+2*31+13,28+30+2*31+13,28+30+3*31+13,28+2*30+3*31+13,28+30*2+4*31+13,28+2*30+5*31+13,28+3*30+5*31+13,28+3*30+6*31+13,28+4*30+6*31+13};
     for(i=1;i<=12;i++)
	 {
		 if((a[i]%7+k-1)%7==5)
			 cout<<i<<endl;
	 }
	 return 0;
}