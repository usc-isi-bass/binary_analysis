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



 void line(int a,int x[],int num)
{
	x[num]=a;
	num++;
	if(a==1)
	{
		return;
	}
	else{
	if(a%2==0)
	{
		line(a/2,x,num);
	}
	else{
		line((a-1)/2,x,num);
	
		
		

	
	}
	}
}



int main()
{
	
	
	
	int x[101],y[101];
	int i,j,k,flag=0;
	int a,b;
	memset(x,0,sizeof(x));
    memset(y,0,sizeof(y));
	cin>>a>>b;
	line(a,x,1);
	line(b,y,1);
	for(i=1;x[i]!=0;i++)
	{
		for(j=1;y[j]!=0;j++)
		{
			if(x[i]==y[j])
			{
				cout<<x[i]<<endl;
				flag=1;
				break;
			}
			if(flag==1)
			{
				break;
			}
		}
	}

	

	

		
	


		








		

	
	return 0;

}

