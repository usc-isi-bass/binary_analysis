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
	int w,i,date[12]={0,31,28,31,30,31,30,31,31,30,31,30},sum=0;
	cin >>w;
	for (i=0;i<12;i++)
	{
		sum+=date[i];
		if(w<=5)
		{
			if((sum+w+7)%7==0)
				cout <<i+1<<endl;
		}
		else
		{
			if ((w+sum)%7==0)
				cout <<i+1<<endl;
		}
	}
	return 0;
}
