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
	char str[101]={0},str1[101];
	int i,j,q;
	cin.getline(str,101);
		for(i=0,j=0; str[i]!='\0';)
			if(str[i]==' ')
			{
				if(str[i+1]==' ')
					i++;
				else
				{
					str1[j]=str[i];
				    i++;
					j++;
				}
			}
		
			else
			{
				str1[j]=str[i];
			    i++;
				j++;
			}
	    for(q=0;q<j;q++)
			cout<<str1[q];
		cout<<endl;
	  return 0;
}
