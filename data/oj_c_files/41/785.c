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

//**********************************
//???????
//???2013.11.5
//**********************************
int main()
{
	int a=0,b=0,c=0,d=0,e=0,i=0,k[6],p[6],j=0;
	for(k[5]=1;k[5]<=5;k[5]++)
	{
		if(k[5]==2||k[5]==3)
		   continue;
		for(k[1]=1;k[1]<=5;k[1]++)
		{
			if(k[1]==k[5])
				continue;
			for(k[2]=1;k[2]<=5;k[2]++)
			{
				if(k[2]==k[1]||k[2]==k[5])
					continue;
				for(k[3]=1;k[3]<=5;k[3]++)
				{
					if(k[3]==k[5]||k[3]==k[1]||k[3]==k[2])
						continue;
					k[4]=15-k[1]-k[2]-k[3]-k[5];
					p[1]=(k[5]==1);
					p[2]=(k[2]==2);
					p[3]=(k[1]==5);
					p[4]=(k[3]!=1);
					p[5]=(k[4]==1);
					j=0;
				       for(i=1;i<=5;i++)
					 { 
					     if(p[i]==1)
							 if((k[i]==1)||(k[i]==2))
							        j++;
						 if(p[i]==0)
							 if((k[i]==3)||(k[i]==4)||(k[i]==5))
								     j++;
					   }
					 if(j==5)
						 cout<<k[1]<<" "
					         <<k[2]<<" "
							 <<k[3]<<" "
						     <<k[4]<<" "
							 <<k[5]<<endl;
				}
			}
		}
	}
		return 0;
}