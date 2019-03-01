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

//*********************************************************************
//*????weight.cpp                                                 *
//*?  ??spica                                                      *
//*?????2011?11?                                               *
//*????:????????????????????????????  *
//*********************************************************************
int main()
{
	int z=0,q=0,s=0,l=0,w=0;    //??????????z,q,s,l???????w
	int i=0,j=0;                //??????i,j6
	char weight[6];     //??????weight[]        
	for(i=1;i<=5;i++)   //??????????
	{
		weight[i]=' ';
	}
	for(z=1;z<=5;z++)   //z???1—5??
	{
		for(q=1;q<=5;q++)//q???1—5??
		{
			if(z==q)    //z=q,??
				continue;
			for(s=1;s<=5;s++)//s?1—5??
			{
				if(z==s||q==s)//z=s?q=s,??
					continue;
				for(l=1;l<=5;l++)//l?1—5??
				{
					if(z==l||s==l||q==l)//z=l?q=l?s=l??
						continue;
					if((z+q)==(s+l)&&(z+l)>(s+q)&&(z+s)<q)//?????????????????
					{
						weight[z]='z';
						weight[q]='q';
						weight[s]='s';
						weight[l]='l';
						for(j=5;j>=1;j--)  //??????????
						{
							if(weight[j]!=' ')
							{
								w=j*10;
								cout<<weight[j]<<" "<<w<<endl;
							}
						}
					}
				}
			}
		}
	}
	return 0;
}
