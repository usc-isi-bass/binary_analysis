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

/*
 *    Filename:3.4NormalBloodpressure.cpp
 *
 *  Created on: 2012-10-22
 *      Author: ???
 *    Function:????????????????
 */

int main()
{
	int n,a,b,i=0,h=0;//n??????a?b???????????,i?k?????h???????????
	cin>>n;
	while(n!=0)//??????n??
	{cin>>a >>b;
	if(a>=90 && a<=140 && b>=60 && b<=90)
	   i++;          //?????i+1
	else
	      i=0;     //??????i????
	if(h<=i)
		h=i;         //??h?????????
	   n--;
	  	}
     cout<<h<<endl;
     return 0;
}