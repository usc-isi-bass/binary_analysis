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
 * Homework3.5FibonacciSequence.cpp
 *
 * ?????????????: ?????????????1????????????2?????
 * ???????a???????????a??????
 *  Created on: 2013-10-27
 *      Author: JuiceHe
 */
int main()
{
   int str[50]={1,1},num[20];int n,i;
   for(i=2;i<50;i++)
	   str[i]=str[i-1]+str[i-2];//????????
   cin>>n;//????n
   for(i=0;i<=n-1;i++)
	   cin>>num[i];//??n????????n???
   for(i=0;i<=n-1;i++)
	   cout<<str[num[i]-1]<<endl;//?????????????

   return 0;
}