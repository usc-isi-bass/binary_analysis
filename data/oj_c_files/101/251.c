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

int main( )
{
    int a,b,c,i[3];                                      //?????
	char j[3]={0};
    for(a=0;a<3;a++)                                     //??for????????
	{
		for(b=0;b<3;b++)
		{
			if(b==a)continue;
			c=3-a-b;
			i[a]=(b>a)+(a==c);                //??????????
			i[b]=(a>b)+(a>c);
			i[c]=(c>b)+(b>a);
			if(i[a]+i[b]+i[c]==3&&i[a]!=i[b]&&i[b]!=i[c]&&i[a]!=i[c])//????????????3
			{
				if(i[a]+a==2&&i[b]+b==2&&i[c]+c==2)//?????? ????2
				{
			        j[a]=65;j[b]=66;j[c]=67;   //??
			        int z=0;
		         	for(z=0;z<3;z++)
				     cout<<j[z];
	}}}}
	cout<<endl;
	return 0;
}