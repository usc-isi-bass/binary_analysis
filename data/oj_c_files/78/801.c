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

//****************
//*???        *
//*1000010538    *
//***************
int main()                                                       //???
{
	int z,q,s,l,i,sum=0;                                         //???????
	char rank[6]={0};                                            //?????????
	for(z=1;z<=5;z++)                                            //?????????????????????????
	{
		for(q=1;q<=5;q++)
		{if(z==q)  continue;                                     //????????????????
		    for(s=1;s<=5;s++)
			{if(s==z||s==q)  continue;
			     for(l=1;l<=5;l++)
				 {if(l==s||l==z||l==q)  continue;
				     sum=(z+q==s+l)+(z+l>=s+q)+(z+s<q);           //??????????
			if(sum==3)                                   //?????????
			{   
				rank[z]='z';                             //??????
				rank[q]='q';
				rank[s]='s';
				rank[l]='l';
				for(i=5;i>=0;i--)                        //??????
					 {
						 if(rank[i]!=0)
					cout<<rank[i]<<" "<<i*10<<endl;
					 }
					 }
				 }
			}
		}
	}
		return 0;
}                                                                  //??