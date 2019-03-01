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
	char a[100],b,c;
	cin.getline(a,100);//?????
	b=a[0];//????????b?????
	int i,j,l;
	l=strlen(a);
	for(i=1;i<l;i++)
		if(a[i]!=a[0]){c=a[i];break;}//?????a[0]?????c?????
	for(i=0;i<l;i++)
	{
		if(a[i]==c)//??a[i]???
		{
			a[i]='0';//?a[i]??0
			for(j=i;j>=0;j--)
			{
				if(a[j]==b)//?i??????????
				{
					cout<<j<<" "<<i<<endl;//??j i
					a[j]='0';//?a[j]??0
					break;//??????
				}
			}
		}
	}
	return 0;
}