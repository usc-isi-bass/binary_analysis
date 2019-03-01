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
	char str[1000];
	char sub[257],rep[257];
	int i,j,k,ss=0,se=0;
	gets(str);
	gets(sub);
	gets(rep);
	for(i=0;str[i]!=0;i++)
	{
		if(str[i]==sub[0])
		{
			for(k=i+1,j=1;str[k]!=0&&sub[j]!=0;k++,j++)
			{
				if(str[k]!=sub[j])
				{
					break;
					}
			}
			if(sub[j]==0)
			{
				ss=i;
				se=k;
				break;
			}
			
		}
	}	 
	if(ss<se){
		if(strlen(sub)<=strlen(rep))
		{
			for(i=ss,j=0;rep[j]!=0;i++,j++){
			str[i]=rep[j];
			}
			for(k=se;str[k]!=0;k++,i++)
			{
				str[i]=str[k];
				
			}
			for(i=ss,j=0;rep[j]!=0;i++,j++)
			{
				str[i]=rep[j];
			}
		}
	}
		
	printf(str);
	return 0;
}