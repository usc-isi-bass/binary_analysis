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
	int month[13]={0,31,28,31,30,31,30,31,31,30,31,30,31},m,i,j,day=0;
	cin>>m;                                 //???????m?
	for(i=1;i<=12;i++)
	{
		day=0;
                j=1;
		while(j<=i-1)
		{
            day+=month[j];
			j++;
		}
		day+=13;
        if((day+m-6)%7==0) cout<<i<<endl;
	}
 return 0;
}
