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

int main ()
{ 
	int z,q,s,l;//???????????
	for(z=10;z<=50;z=z+10)//?????????????????
	{
		for(q=10;q<=50;q=q+10)
		{
			for(s=10;s<=50;s=s+10)
			{
				for(l=10;l<=50;l=l+10)
				{
					
						
					if(z+q==s+l&&z+l>s+q&&z+s<q)//????
					{
						int a[5]={0};//????????int?????
						char b[5];//??char????????????
					    a[1]=z;
						b[1]='z';
						a[2]=q;
						b[2]='q';
						a[3]=s;
						b[3]='s';
					    a[4]=l;
						b[4]='l';
						int i,j,p;//?????????????????????
						char k;//??
						for(j=1;j<=3;j++)//??????????????????
						{
						    for(i=1;i<=4-j;i++)
						  {
							  if(a[i]<a[i+1])
							  {
								p=a[i];
								a[i]=a[i+1];
								a[i+1]=p;
								k=b[i];
								b[i]=b[i+1];
								b[i+1]=k;
							   }

						   }

						 }
					
					    for(int i=1;i<=4;i++)//?????????????
					      {
					         cout<<b[i]<<' '<<a[i]<<endl;
					      }
					}

					
				}
			}
		}
	}

	    return 0;
	
}