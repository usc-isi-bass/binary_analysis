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
	int a[200][3],n,i;
	float b[200];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i][1]>>a[i][2];
		b[i]=(float)a[i][2]/a[i][1];
	}
	   for(i=2;i<=n;i++)
	   {  if(b[i]-b[1]>0.05)
		  cout<<"better";
	      
			   
		  else if(b[1]-b[i]>0.05)
			  cout<<"worse";
		  else 
			  cout<<"same";
		  cout<<endl;
	   }
	   return 0;
}