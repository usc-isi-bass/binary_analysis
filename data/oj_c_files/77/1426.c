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
	char a[100];
	cin.getline(a , 100 , '\n');
	//?????
	cout<<endl;
	int len;
	len=strlen(a);//?????????
	int G[50], k=0;
	char b=a[0];
	for (int i=0;i<len;i++)
	{//???????????????
	   if (a[i]!=b) G[k++]=i;
	}
	for (int i=0;i<k;i++)
	{
		for (int j=G[i]-1;j>=0;j--)
		{
		   if (a[j]==b) 
		   {//??????????????????????????
			   cout<<j<<" "<<G[i]<<endl;;
		       a[G[i]]='\0';//??????????????????
			   a[j]='\0';
			   break;
		   }
		}
	}
	return 0;
}

