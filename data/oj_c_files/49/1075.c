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
	char s[600];
	int len=2,j,m,i,g=0;
   cin>>s;
   for(len=2;len<=strlen(s);len++)//???????????
   {
	   for(j=0;j<strlen(s)-len+1;j++)
	   {

		   g=0;//??????????
		   for(m=0;m<=len/2-1;m++)
		   {
			 if(s[j+m]!=s[j+len-1-m]){g=1;break;} //??????????? ????g??????
		   }
		   if(g==0)
		   {
			   for(i=j;i<j+len;i++)
			   {
				   cout<<s[i];
			   }
			   cout<<endl;
		   }
	   }
   }
   return 0;
}
