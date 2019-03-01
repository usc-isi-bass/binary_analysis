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

/**
*@file 5.cpp
*@author ??? 1300012841
*@date 2013-09-25
*@description ??3?5?7????
*/


int main()
{
int num;
	scanf("%d",&num);
 int x;
x=0;
if(num%3==0)
	{cout << "3" ;x=1;}
if(num%5==0)
	{if(x==1)cout<<" ";
          cout << "5" ;
         x=1;}
if(num%7==0)
	{if(x==1)cout<<" "; 
        cout << "7";}
if((num%7==0||num%3==0||num%5==0)==0)
	cout << "n" << endl;
else cout<<endl;
	return 0;
}