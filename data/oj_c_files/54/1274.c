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

int work()                                  //????;
{
	int i,n,k,a[100];                       //????,????????;
	for(i=0;i<100;i++)
		a[i]=0;
	cin >> n >> k;                          //?????N??K?;
    a[0]=k;
	do
	{	a[0]=a[0]+n;                        //????????? ; 		
	    for(i=1;i<n;i++)
		{			
		    a[i]=a[i-1]*n/(n-1)+k;         //?????????? ;			
			if(a[i]%n!=k)break;            //???I?????????N??????N??;
		}
	}while(a[n-1]%n!=k);                   //?????????; 
	cout << a[n-1] << endl;
	return 0;
}
int main()                                 //???;
{
	work ();
	return 0;
}

	