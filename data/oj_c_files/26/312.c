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


//*************************************************************
//*                  ????????                         *
//*                  ?????1000010573                     *
//*                  ?????2010?12?                     *         
//*************************************************************

/*?? 
??????????????????????????????????? 
???? 
??????????????????????????100?
???? 
???????
???? 
Hello      world.This is    c language.
???? 
Hello world.This is c language. 
?? 
gets(char [] str)?????????????str 
*/

int main()               //??? 
{
    char str[111];//????? 
    int length = 0 , j = 0;
    char *p = NULL;
    cin.getline(str,111);//?????
    length = strlen(str);//????????????
	p=str;//?str?????p
	for(int i = 0 ; i<length ; i++)
	{
		str[i]=*p;//??,?????????????
		if(*p==' ')//??????????
		{
			if(*(p-1)==' ')//????????????????
			{//????????
				while(*p==' ')//while??????????????	
				{
					p++;
				}
				i--;
				continue;
			}
			else//?????????
			{	p++;   }//??????
		}
		else

		{p++;}//???????????????
    }
    printf("%s",str) ;
    return 0; 
}