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
   int n,m,i,a,b[100],k;
   cin>>n;
   for(i=0;i<n;i++)						//????n???
   {
	   cin>>m;
	   if(m==0)							//m=0????
		   cout<<60<<endl;
	   else
	   {
			for(k=0;k<m;k++)			//????m???
			{
				cin>>a;
				b[k]=a;
			}
			for(k=m-1;k>=0;k--)			//?????????
			{
				if(b[k]+3*(k+1)<=60)
				{
					cout<<60-3*(k+1)<<endl;
					break;
				}
				else if(b[k]+3*k<=60)
				{
					cout<<b[k]<<endl;
					break;
				}
			}
	   }
   }
   return 0;
}