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

//********************************************************
//*    ??   1100012931                                 *
//*    ??? ??                                       *
//*    ???  2011.10.29                                *
//********************************************************
int main()
{
	int t[4],i,j,a;
	char x[5]={"zqsl"},b;
	for(t[0]=1;t[0]<=5;t[0]++)
	for(t[1]=1;t[1]<=5;t[1]++)
	for(t[2]=1;t[2]<=5;t[2]++)
    for(t[3]=1;t[3]<=5;t[3]++)
	{
		if(((t[0]+t[1])==(t[3]+t[2]))&&((t[0]+t[3])>(t[1]+t[2]))&&(t[0]+t[2]<t[1]))//????
		 {
			 for(i=0;i<3;i++)//??????
		     for(j=i+1;j<4;j++)
		    {
			     if(t[i]<t[j])
			    {
				  a=t[i];t[i]=t[j];t[j]=a;
			   	  b=x[i];x[i]=x[j];x[j]=b;//????????????
			     }
		     }
    	     for(i=0;i<4;i++)
     	     {cout<<x[i]<<" "<<t[i]*10<<endl;}//???????*10??????
	         return 0;
		  }
      }
}
		