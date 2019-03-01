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


//bug????????
int main()
{
	int i,j;
	int n;
	int l;
	int num;
	char a[50];   //????
	char s[160];   //??
	scanf("%d",&n);   //?????
	for(i=0;i<=n;i++)
	{
		//printf("%d ",i);  //debug
		scanf("%s",a);    //????????
		l=strlen(a);
		if((num+l>=80)||(n==i))   //????????
		{
			printf("%s\n",s);   //?????
			num=0;        //???????
		}
		else
			if(num>0)     //???????
			{
				*(s+num)=' ';
				num++;     //????
			}
		for(j=0;j<l;j++)
		{
			*(s+num+j)=*(a+j);
		}
		*(s+num+l)='\0';
		num+=l;    //???
		//printf("%d %s\n",i,s);  //debug
	}
	return 0;
}