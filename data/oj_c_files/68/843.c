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
	int n,a,b,s;
	int i,j,k;
	int flag=1,flag1=1;
	cin>>n;
	for(s=6;s<=n;s=s+2)
	{
	
			flag=1;
			flag1=1;
		
	
			for(a=3;a<=s/2;a=a+2)
			{
				for(i=3;i<=sqrt(a);i=i+2)
				{
					flag1=1;
					if(a%i==0 || a%2==0) 
					{	
						flag1=0;
						break;
					}
				}
				if(flag1==1)
				{
						for(i=3;i<=sqrt(s-a)+1;i=i+2)
						{	
							flag=1;
							if((s-a)%i==0 || (s-a)%2==0 ) 
							{
								flag=0;
								break;
							}
							else 
								continue;
						}
				}
			
				if(flag==1)
				{
					cout<<s<<'='<<a<<'+'<<s-a<<endl;
					break;
				}
			}
		
	}

	return 0;
}

