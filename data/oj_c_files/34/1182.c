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

int X(int m)//????
{
   if (m%2==0)//?????????
   {
	   cout<<m<<"/2="<<m/2<<endl;
	   m=m/2;
	   if (m==1) //????????1
	   {
		   cout<<"End"<<endl;
	   }
	   else X(m);//????
   }
   else 
   {
	   cout<<m<<"*3+1="<<m*3+1<<endl;
	   m=m*3+1;
	   if (m==1)  
	   {
		   cout<<"End"<<endl;
	   }
	   else X(m);
   }
   return 0;
}
int main()
{
    int n;
	cin>>n;
	cout<<endl;
	if (n==1) cout<<"End"<<endl;//??1?????End
	else X(n);//??????
    return 0;
}

