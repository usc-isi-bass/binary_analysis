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
    char ch[500],*p1=ch,*p2=ch;
    int i,length=0,flag=1,max=0,min=500;
    gets(ch);
    for(i=0;ch[i]!='\0';i++)
    {
    	if(ch[i]==' ')
    	{
    		if(flag==1)
    		{
    			if(length>max)
    			{
    				max=length;
    				p1=&ch[i]-length;
    			}
    		    if(length<min)
    			{
    				min=length;
    				p2=&ch[i]-length;
    			}
    			length=0;
    			flag=0;
    		}
    	}
    	else
    	{
    		if(flag==0) flag=1;
    		length++;
    	}
    }
    if(length>0)
    {
    	if(length>max) p1=&ch[i]-length;
    	else if(length<min) p2=&ch[i]-length;
    }
    for(;*p1!=' '&&*p1!=0;p1++)
    printf("%c",*p1);
    printf("\n");
    for(;*p2!=' '&&*p2!=0;p2++)
    printf("%c",*p2);
    printf("\n");
    		
}