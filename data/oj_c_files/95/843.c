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
	char a[80],b[80];                                          //????a[i],b[i]
	int i;                                                     //????????
	cin.getline(a,80);                                         //?????
	cin.getline(b,80);
	for(i=0;i<=80;i++)
		if(a[i]>=97)
			a[i]=a[i]-32;
	for(i=0;i<=80;i++)
		if(b[i]>=97)
			b[i]=b[i]-32;
	for(i=0;i<80;i++)                                          //????
	{
		if(a[i]=='\0')                                         //??????????????
		{
			cout<<"="<<endl;
			break;                                             //???????
		}
		else if(a[i]==b[i])                                    //????
			continue;                                          //??
		else if(a[i]>b[i])                                     //????
		{
			cout<<">"<<endl;
			break;                                             //???????
		}
		else if(a[i]<b[i])                                     //????
		{
			cout<<"<"<<endl;
			break;                                             //???????
		}
	}
	return 0;
}