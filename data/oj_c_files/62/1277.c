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
 * hehe.cpp
 *
 *  Created on: 2012-12-11
 *      Author:??
 *  ???????????????????????????????????
 */
int main(){
	char a[200],*p;
	int lena,judge=0;
	cin.getline(a,200);
	p=a;
	lena=strlen(a);
	for(int i=0;i<lena;i++)
	{  if(*p==' '&&judge==0)
		{judge=1;
		 cout<<*p;
		}                       //???????????judge??
	   if(*p==' '&&judge==1)
		  ;                     //??????????
	   if(*p!=' ')
		   {cout<<*p;
		    judge=0;           //????????
		   }
	   p++;
	}
	return 0;
}
