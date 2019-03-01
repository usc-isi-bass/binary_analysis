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

char* getmemory(int num)
{
	char *p=(char*)malloc(num*sizeof(char));  //????????
	return p;
}

void main()
{
	char *str,*p1,*a;      // str?????????,???????????
	int m,k;               //a????????,
	str=getmemory(31);     //p1??????????
	gets(str);           
	p1=a=str;              //m???????????
	k=0;                   // k????????????
	for(;*str!='\0';)
	{
		if(*str<'0'||*str>'9')    //???????
		{	
			k+=1;
			if(*(str+1)>='0'&&*(str+1)<='9')  //????????
			{                                 //????????
				m=str-k-p1;
				if(p1==a){for(;p1<=str-k;p1++)printf("%c",*p1);printf("\n");}
				else {for(p1=p1+1;p1<=str-k;p1++)printf("%c",*p1);printf("\n");}
				p1=str;	
				k=0;
			}
		}
		str++;
	}
	if(p1==a)
		for(;p1<str-k;p1++)printf("%c",*p1);  //??????????????
	else
		for(p1=p1+1;p1<str-k;p1++)printf("%c",*p1);//????????

}