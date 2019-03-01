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

int main( )
{ 
	int num,m;
	cin>>num;
	while(num!=1)
	{
		m=num;
		if(num%2==0)num=num/2,cout<<m<<"/"<<"2="<<num<<endl;
		else num=num*3+1,cout<<m<<"*3+1="<<num<<endl;
	}
	cout<<"End";                                         
    return 0;
}