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

/*??(12.3) ??????????? (1016)

?? ????05
??
?????strcmp??????????????????????????????????
??ASCII????????????????????'\0'???????????????????
?????????????????????????????????????????????????
????????????"Hello"?"hello"?????????????????????????????
???????????????

????
????????????????????????????????80?

????
???????????????????????"<"
???????????????????????">"
????????????????"="

????
Hello, how are you?
hello, How are you?

????
=

??
??C??????gets????????scanf???????

 *
 * 9.cpp
 *
 *  Created on: 2011-10-28
 *      Author: q
 */
int main()
{
	char str1[81]={"0"};//??????
	char str2[81]={"0"};
	unsigned int i,m,k=0;//??i??????m??????????k?????bool??
	cin.getline(str1,81);//?????
	cin.getline(str2,81);
	for(i=0;i<(strlen(str1) );i++){//???????????????
	if(str1[i]<'a')str1[i]=str1[i]+32;
	}
	for(i=0;i<(strlen(str2) );i++){
		if(str2[i]<'a')str2[i]=str2[i]+32;}
	if(strlen(str1)>strlen(str2))m=strlen(str1);//?????????
	else m=strlen(str2);
	for(i=0;i<m ;i++){//????
		if(str1[i]>str2[i]){cout<<">"<<endl;k++;break;}
		if(str1[i]<str2[i]){cout<<"<"<<endl;k++;break;}

	}
	 if(k==0)cout<<"="<<endl;//??????????????

	return 0;
}
