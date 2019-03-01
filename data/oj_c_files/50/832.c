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

int month[12]={31,28,31,30,31,30,31,31,30,31,30,31};
int main()
{
	int w;
	cin>>w;
	int sum=w;
    for(int i=0;i<12;i++)
    {
		int temp=(sum+12)%7;
		if(temp==5)
			cout<<i+1<<endl;
        sum+=month[i];
	}
	return 0;
}