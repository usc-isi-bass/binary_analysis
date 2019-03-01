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
	int a , b , c , cash;
	int t;
	cin >> cash;
	t = cash;
	c = cash % 10 ;
	t = t / 10 ;
	b = t % 10 ; t = t/10;
	a = t % 10;
	cout << a << endl;
	switch( b )
	{
	case 9:cout<<1<<endl<<2<<endl<<0<<endl;break;
	case 8:cout<<1<<endl<<1<<endl<<1<<endl;break;
	case 7:cout<<1<<endl<<1<<endl<<0<<endl;break;
	case 6:cout<<1<<endl<<0<<endl<<1<<endl;break;
	case 5:cout<<1<<endl<<0<<endl<<0<<endl;break;
	case 4:cout<<0<<endl<<2<<endl<<0<<endl;break;
	case 3:cout<<0<<endl<<1<<endl<<1<<endl;break;
	case 2:cout<<0<<endl<<1<<endl<<0<<endl;break;
	case 1:cout<<0<<endl<<0<<endl<<1<<endl;break;
	case 0:cout<<0<<endl<<0<<endl<<0<<endl;break;
	default:break;
	}

	if ( c >= 5 )
	{
		cout <<1<<endl<<c-5<<endl;
	}
	else 
		cout<<0<<endl<<c<<endl;
	return 0;
}

	



	
