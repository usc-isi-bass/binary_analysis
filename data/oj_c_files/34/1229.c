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
	int n;
	cin>>n;
	while(n>1)//?while????????n>1
	{
		switch(n%2)//?switch???????
		{
		case 0://?????????
		  n=n/2;cout<<n*2<<"/"<<2<<"="<<n<<endl;
		  break;
		case 1://?????????
			n=n*3+1;
		    cout<<(n-1)/3<<"*"<<3<<"+"<<1<<"="<<n<<endl;
			break;
		}
	   
	}
	cout<<"End";
	return 0;
}


