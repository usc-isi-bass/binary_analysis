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
	int num,i,j;
	int bit[5];
	i=1;
	cin>>num;
         if (num==0)
         {
              cout<<0;
              return 0;
         }
	while (num>0)
	{
		bit[i]=num%10;
		num=num/10;
		i=i+1;
	}
	for (j=1;j<i;j++) cout<<bit[j];
	return 0;
}