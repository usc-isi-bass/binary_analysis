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

void main()
{
	char str[15],sub[4],m;
	int t,i,len;
	
	
	
	while(scanf("%s %s",str,sub)!=EOF)
	{
		t=0;m=str[0];len=0;
		for(i=0;str[i]!='\0';i++)
			len++;
       
        for(i=1;i<len;i++)
			if(str[i]>m)
			{
				t=i;
				m=str[i];
			}
	    for(i=len-1;i>t;i--)
			str[i+3]=str[i];
		str[t+1]=sub[0];
		str[t+2]=sub[1];
		str[t+3]=sub[2];
		str[len+3]='\0';
		printf("%s\n",str);
	}
}
			

			
		
	

			
