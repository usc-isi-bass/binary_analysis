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

//****************************
//* ?????3 5 7????  *
//* by song liwei            *
//****************************
int main()
{
	int k;
	cin>>k;
	if(k%3==0&&k%5==0&&k%7==0)
		cout<<"3"<<" "<<"5"<<" "<<"7"<<endl;              //????3 5 7?????
    else if(k%3==0&&k%5==0&&k%7!=0)
		cout<<"3"<<" "<<"5"<<endl;
	else if(k%3==0&&k%5!=0&&k%7==0)
		cout<<"3"<<" "<<"7"<<endl;
	else if(k%3!=0&&k%5==0&&k%7==0)
		cout<<"5"<<" "<<"7"<<endl;                       //??????????
	else if(k%3==0&&k%5!=0&&k%7!=0)
		cout<<"3"<<endl;
	else if(k%3!=0&&k%5==0&&k%7!=0)
		cout<<"5"<<endl;
	else if(k%3!=0&&k%5!=0&&k%7==0)
		cout<<"7"<<endl;                                 //???1???????
	else cout<<"n"<<endl;
		return 0;
}