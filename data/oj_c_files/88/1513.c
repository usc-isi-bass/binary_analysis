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

int main()
{
	char sen[31] , *p = NULL ;					//sen?????????*p???
	int flag = 0 , len;								//flag????len???????
	cin.getline(sen , 31) ;
	len = strlen(sen) ;							//????????
	for (p = sen ; p < sen + len ; p++)			//???????????
	{
		if(*p >= '0' && *p <= '9')				//????????????flag??1
		{
			cout << *p ;
			flag = 1 ;
		}
		if((*p < '0' || *p > '9') && flag == 1)	//??????????????????????????flag??0
		{
			cout << endl ;
			flag = 0 ;
		}
	}
	return 0 ;
}