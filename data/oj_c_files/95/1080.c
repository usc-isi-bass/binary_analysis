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

//????????????????
//?????2011?11?2?
//???????
int main()
{
char str1[80],str2[80];                        //?????
cin.getline(str1,80);                          //?????
cin.getline(str2,80);
int i;
for(i=0;i<strlen(str1);i++)                    //??????????????
{
if('A'<=str1[i]&&str1[i]<='Z')
str1[i]=str1[i]+32;
}
for(i=0;i<strlen(str2);i++)
{
if('A'<=str2[i]&&str2[i]<='Z')
str2[i]=str2[i]+32;
}
if(strcmp(str1,str2)<0)                          //????????
cout<<"<";
if(strcmp(str1,str2)==0)
cout<<"=";
if(strcmp(str1,str2)>0)
cout<<">";
return 0;
}