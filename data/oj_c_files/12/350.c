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

//**************************
//*?????              *
//*????????        *
//*???1000012832        *
//**************************
int main()
{
	int a[16] ,i,j,k,m,n,count;//????
	    for(i=0;;i++)
		{
			cin>>m;             //??????
			if(m==-1)           //???1???????
			{
			  break;
			}
			else                //????1?????????????
			{
			  count=0;
			  a[0]=m;
		      for(j=1;j<16;j++) //???????????
			  {
			    cin>>a[j];
			    if(a[j]==0)     //???0
			   {
				  break;        //?????
			   }
			  }
			
			
		      n = j;         //???j-1???
		      for(j=0;j<n;j++)
			  {
		      for(k=j+1;k<n;k++)
			  {
			     if(a[j]==2*a[k]||a[k]==2*a[j])//?????????2?????????????????1
				 {
					 count++;
				 }
			  }
			  }
	
	          cout<<count<<endl;//??????
			}
		}
	
	return 0;

}