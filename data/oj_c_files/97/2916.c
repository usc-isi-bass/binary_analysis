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

//**********************************
//****       ??????     *****
//****        1200016612       *****
//**      ????????      ***
//**********************************
int main()                                             //?????
{
	int n=0,a[6],i=0,p=0;                              //??a[6]??????????p???????????? 
	cin>>n;
	a[0]=100;                   
	a[1]=50;
	a[2]=20;
	a[3]=10;
	a[4]=5;
	a[5]=1;
	for(i=0;i<6;i++)                                   //???????????????
	{
		p=n/a[i];
		cout<<p<<endl;
		n=n-p*a[i];                                    //?????????????n???????????
	}
 return 0;
}