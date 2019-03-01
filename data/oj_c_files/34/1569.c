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
	int n=0;
	cin>>n;
	 while(n!=1)
	 {
		if(n%2==0)              //n?????n/2???
		{
			cout<<n<<"/2="<<n/2<<endl;
			n=n/2;
			continue;
		}
		if(n%2!=0)                  //n?????n*3+1???
		{
			cout<<n<<"*3+1="<<n*3+1<<endl;
			n=n*3+1;
			continue;
		}
	 }
	cout<<"End";            //??END
	cin.get();cin.get();cin.get();
	return 0;
}