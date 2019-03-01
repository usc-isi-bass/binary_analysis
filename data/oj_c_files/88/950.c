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

int main()
{
	char a[31],*q;
	int i,j,k,len;
	cin.getline(a,31);
	len=strlen(a);        //??????????
	q=a;k=0;
	for(j=0;j<len;j++)
	{
       if((*q>='0')&&(*q<='9'))   //??????????  
	   {
			cout<<*q;
            k=0;
        }
	   else if(k==0)      //???????????????????????
		{
			cout<<endl;
			k=1;
    	}
			q++;
	}
     
	return 0;
}
