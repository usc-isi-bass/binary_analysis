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
	int person[3],word[3],i,k,rank[3];                                    //??????person[3]??????????????????0 1 2????word[3]???????????????rank[3]???3?????????????????????i??????k????????????????
	for(person[0]=0;person[0]<3;person[0]++)
	{
		for(person[1]=0;person[1]<3;person[1]++)
		{
			if(person[1]!=person[0])
			{
                person[2]=3-person[0]-person[1];                        //????????
				word[0]=(person[1]>person[0])+(person[2]==person[0]);
				word[1]=(person[0]>person[1])+(person[0]>person[2]);
				word[2]=(person[2]>person[1])+(person[1]>person[0]);
				for(i=0;i<3;i++)
				{
					if(person[i]+word[i]==2)
					{
						k=1;
					}
					else
					{
						k=0;
						break;
					}
				}
				if(k==1)
				{
					for(i=0;i<3;i++)
					{
						rank[person[i]]=i;                                       //???????????????????rank[3]
					}
					for(i=0;i<3;i++)
					{
						cout<<(char)(rank[i]+65);                           //????????????
					}
				}
			}
				
		}
	}
	return 0;
}