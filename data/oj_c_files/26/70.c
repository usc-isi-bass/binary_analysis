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

//???????????? 
//????????????????????????????????????????

int main()                        //?????
{
	char words[101];         //????????????????
	int i;                   //??????i
	cin.get(words,101);      //??????????????
	for(i=99;i>0;i--)        //???????????????
	{
		if(words[i]==32&&words[i-1]==32)    //?????????????????????????
		    words[i]=1;   //?????????1
	}
	for(i=0;i<strlen(words);i++)    //????????????
	{
		if(words[i]!=1)        //???????1
		    cout<<words[i];  //???????
	}
		return 0;
}                            //?????