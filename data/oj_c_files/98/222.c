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
	char a[50];
	int jishu,n,len=0,k=0;
	
	cin>>n;
	
	while(n>0)
	{
		if(k>0)
		{
			jishu=k+1;
		}
		else
		{
			jishu=0;
		}
		k=0;
		cin>>a;
		
		n--;
		len=strlen(a);
		jishu=jishu+len;
		cout<<a;
		
		while(jishu<=80)
		{

		   cin>>a;
		   n--;
		   
		   len=strlen(a);
			jishu=jishu+len;
			
			 if(jishu+1<=80)
			  {
				   cout<<" "<<a;
				   jishu++;
				   if(n==0)
				   {
					   break;
				   }
				   
			  }
			   else
			   {   k=len;
				   cout<<endl<<a;
				   cout<<" ";
				   break;
			   }
		   }
	}
	
		
		



	
	return 0;
}

	
		






