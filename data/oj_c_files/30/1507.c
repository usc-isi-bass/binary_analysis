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

/*************************************
*file                           ******
*author                           ****
*date                              ***
*description                         *
*************************************/

int main()
{
	int n,sum=0;
	cin>>n;
	int i,j,k,l;
	for(i=1;i<=n;i++)
	{
		j=i/10;
		if(i%7==0||i%10==7||j%10==7) continue;
		sum+=i*i;
	}
	cout<<sum<<endl;
	return 0;
}