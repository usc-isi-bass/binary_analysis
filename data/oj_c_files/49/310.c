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
	char str[600];
	cin>>str;
	int le=strlen(str),p,q;

		for(int k=1;k<=le-1;k++)
			for(int i=0;i<=le-2&&i+k<=le-1;i++)
		{
			int flag=1;



			 for(p=i,q=i+k;p<q;p++,q--)
			   if(str[p]!=str[q])
				{
				 flag=0;
				 break;
				}
			               if(flag==1)
				           {
				            for(int m=i;m<=i+k;m++)
				             cout<<str[m];
			               cout<<endl;
				          }
			  if(flag==0)
				  continue;
		}
	return 0;
}
