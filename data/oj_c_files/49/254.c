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
	char str[501];
	cin>>str;
	for(int i=2;i<=strlen(str);i++)
	{
		if(i%2==0)
		{
		   for(int j=0;j<=strlen(str)-i;j++)
		   {
			   int k,l=1;
			   for(k=j;k<j+i/2;k++)
			   {
				   if(str[k]==str[i+j-l])
				   {
					   l++;
					   continue;
				   }
				   else
					   break;
			   }
			   if(k>=j+i/2)
			   {
				   for(int m=j;m<j+i;m++)
					   cout<<str[m];
			   cout<<endl;
			   }
		   }
		}

		if(i%2==1)
		{
		   for(int j=0;j<=strlen(str)-i;j++)
		   {
			   int k,l=1;
			   for(k=j;k<j+i/2;k++)
			   {
				   if(str[k]==str[i+j-l])
				   {
					   l++;
					   continue;
				   }
				   else
					   break;
			   }
			   if(k>=j+i/2)
			   {
				   for(int m=j;m<j+i;m++)
					   cout<<str[m];
			   cout<<endl;
			   }
		   }
		   
		}
	}
	return 0;
}