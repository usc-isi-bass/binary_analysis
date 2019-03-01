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

//****************************************************************************
//????????????????                                           *
//????wayne                                                              *
//?????12.4                                                             *
//****************************************************************************
int main()
{
	char str[30];
	gets(str);                         //?????????
	int len,flag;                      //?flag????????
	char *p=str;                       //????????
	len=strlen(str);                   //???????
	for (;p<=&str[len-1];p++) 
	{
		if (*p=='-')                    //??????
		{
			for (p++;p<=&str[len-1];p++)
			{
				if (*p>=48&&*p<=57)   //???????
					continue;
				else                  //??????????
				{
					cout<<endl;       //??????
					flag=1;           //flag???1????????????
					break;
				}
			}
		}
		else 
		{
    		if (*p>=48&&*p<=57)     //??????
			{
		    	cout<<*p;
		     	flag=0;             //??flag???0???????????
			}
	    	else if (flag==0)      //?????? flag??
			{ 
		    	cout<<endl;        //??
		    	flag++;            //????????
			}
		}
	}
	return 0;
}