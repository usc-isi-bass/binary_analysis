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

/*????
 * divide.cpp
 *
 *  Created on: 2011-12-1
 *      Author: WJ
 */

int sum=1;                            //?????1?????
void f(int b,int a)                        //??????????????
{
	for(int i=b;i<=a;i++){           //????????
	if((a%i==0)&&(i<=a/i)){
		sum=sum+1;                   //???1
		f(i,a/i);                         //???????????
	}
	if(i>a/i)  break;
	}
}
int main()
{
	int a,n;
	cin>>n;
	while(n>0){                //??????
		cin>>a;
		sum=1;
		f(2,a);                  //????
		cout<<sum<<endl;         //????
		n--;
	}
	return 0;
}
