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
 * shuzu2.12.cpp
 *
 *  Created on: 2013-11-12
 *      Author: st
 */
int main()
{
	char a[100];
	cin.getline(a,100);
	int i,k,spcamount=0;

	for(i=0;i<strlen(a);i++)
	   if((a[i]==' ')&&(a[i+1]!=' '))
		   continue;
	   else
		   if((a[i]==' ')&&(a[i+1]==' '))
			   {spcamount++;
			   for(k=i;k<strlen(a)-spcamount;k++)
                a[k]=a[k+1];
			    i--;
			   }

   for(i=0;i<strlen(a)-spcamount;i++)
        cout<<a[i];
	return 0;



}
