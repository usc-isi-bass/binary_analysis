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
	int a,b,i=0,j=0,s=0,temp;                         //????a?b?????i?j?????temp
	char str1[32],str2[32];                           //?????str1,str2
	cin>>a>>str1>>b;                                  //?????a,str1,b
	do
	i++;
	while(str1[i]!='\0');                             //?????str1???
	for(int k=0;k<i;k++)
	{
		if(str1[k]>96)
			str1[k]-='a'-10;
		else if(str1[k]>64)
			str1[k]-='A'-10;
		else
			str1[k]-='0';                   //??????????????????
		s+=str1[k]*(int)pow((double)a,i-1-k);    //??str1?????
	}
	do
	j++;
	while(s>pow((double)b,j));                        //????????
	for(int l=0;l<j;l++)
	{
		temp=s/pow((double)b,j-l-1);
		if (temp<10)
			str2[l]=temp+'0';
		else
			str2[l]=temp-10+'A';
		s-=temp*pow((double)b,j-l-1);
	}                                                 //?????????????
	str2[j]='\0';                                     //?str2????????\0????????
	cout<<str2;                                       //????
	return 0;
}