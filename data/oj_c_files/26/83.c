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

int main()                            //?????
{
	int i=0,j;                        //??????ij??????
	char str[100];                    //???????????????
	for(j=0;j<100;j++)                //??????????????0
	{str[j]=0;}
	cin.get(str,100,'\n');            //?????????????
	while(i<100)
	{  if(str[i]!=0)                  //??????????
	    {
			if(str[i]!=' ')           //?????????????????
	        {cout<<str[i];}
			if(str[i]==' '&&str[i+1]!=' ') //??????????????????????????
			{cout<<" ";}
	
	    }
	 i++; 
	}



return 0;

}