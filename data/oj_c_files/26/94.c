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

//******************************************************************
//*?????????????.cpp                                  *
//*??????                                                    *
//*?????2010?11?19?                                        *
//*??????????????????                            *
//******************************************************************
int main()//???
{//?????
	char word[100];//?????
	int n=0;//??????
	int i=0;
	cin.getline(word,100,'\n');//?????
	n=strlen(word);//???????
	for(i=0;i<n;i++)//for??
	{//????
		if(word[i]==word[i-1]&&word[i-1]==' ')//?????????
		{
			continue;
		}
		if(word[i]=='\0')//??
			break;
		cout<<word[i];//?????
	}//????
	return 0;
}//?????