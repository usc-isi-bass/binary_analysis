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
 * ????.cpp
 *
 *  Created on: 2010-12-20
 *      Author: ???
 */
int main()
{
	char a[501],b[501],c[501];              //a???????b??????c??????
	int i,len,j,k;                          //len???
	cin>>a;                                 //??
	len=strlen(a);
	for (k=2;k<=len;k++)                    //????k?????
	{
	    for (i=0;i<501;i++)                 //???
	    {
	    	b[i]=c[i]='\0';
	    }
		for (i=0;i<len;i++)
	    {
		    if (i+k<=len)                      //????????
		    {
	    	   for (j=i;j<i+k;j++)             //??k???????
			       b[j-i]=a[j];
		       for (j=0;j<k;j++)               //??
		       {
		 	       c[j]=b[k-j-1];
		       }
		       if (strcmp(b,c)==0)             //?????????
			       cout<<b<<endl;
		    }
		    else break;
	    }
	}
	return 0;
}