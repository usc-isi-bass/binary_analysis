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


char *judge(char *head)
{
	int i,k=0;
	char *put=NULL;
	if(((*head<='z')&&(*head>='a'))||((*head<='Z')&&(*head>='A'))||(*head=='_'))
	{
		if(strcmp(head,"int")==0||strcmp(head,"double")==0||strcmp(head,"float")==0||strcmp(head,"for")==0||strcmp(head,"else")==0||strcmp(head,"if")==0)
		   put="no";
		
		else
		
		{
			for(i=1;*(head+i)!='\0';i++)
		
			{
			
				if(((*(head+i)<='z')&&(*(head+i)>='a'))||((*(head+i)<='Z')&&(*(head+i)>='A'))||(*(head+i)<='9')&&(*(head+i)>='0')||(*(head+i)=='_'))
				
					k++;
			
				else
				
				{
					put="no";
					break;
				}
		
			}
			if(strlen(head)-1==k)
				put="yes";
		}

	}
	
	else
        put="no";

	return(put);
}

void main()
{
	int n,i;
    char a[22]={'0'};
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%s",a);
		printf("%s\n",judge(a));
	}

}
//vc???pg????