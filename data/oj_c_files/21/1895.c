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

//Define Head files
int a[501];//Array of Elements
int main()
{
	int n,x;
	double avr=0;
	cin>>n;
	for(x=1;x<=n;x++)
	{
		cin>>a[x];
		avr+=a[x];
	}
	avr=avr/n;
	//Input Fin
	sort(&a[1],&a[n]+1);
	
	
	/*for(x=1;x<=n;x++)  cout<<a[x]<<' ';
	cout<<endl<<avr;
	*/
	
	if ( avr-a[1]>a[n]-avr )
	{
		cout<<a[1]<<endl;
	}
	else if ( avr-a[1] ==a[n]-avr )
	{
		cout<<a[1]<<','<<a[n]<<endl;
	}
	else cout<<a[n]<<endl;
	

	return 0;
}
	 