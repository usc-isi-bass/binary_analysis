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

//******************
//*????        *
//*1000010538      *
//******************
int main()
{
	char str[100];
	int i=0,j=0,k=0,m=0;
	cin.getline(str,101,'\n');             //??????????????
	k=strlen(str);                         //?????????
	for(i=0;i<k;i++)                        //??
	{
		if(str[i]==' ')                    //?????????
		{
			for(j=i;j<k;j++)               //????????????
			{
				if(str[j]!=' ')            //??????????????,??j-i????????
					break;
			}
		for(m=i+1;m<=j-1;m++)              //?????????????????????1
		{
			str[m]=1;
		}
		}
	}
	for(i=0;i<k;i++)                        //????1???
	{if(str[i]!=1)
	     cout<<str[i];
	}
		
	return 0; 
}                                             //?????