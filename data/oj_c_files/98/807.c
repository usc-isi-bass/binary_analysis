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
	int n,i,l,L=-1,k=0,j;
	char before[40];//????before???????
	char word[40];//????word???????
	cin>>n;//????
	scanf("%s",word);//????
	l=strlen(word);//???????
	for(i=0;i<l;i++)
		before[i]=word[i];
	before[l]='\0';//???????????????before?
	L=l;//L?????????l
	for(i=1;i<n;i++)
	{
		scanf("%s", word);//???????????
        l=strlen(word);//???
        k=L+l+1;//?????????k
		if(k>80&&L<=80)//?k>80??L<=80??????????????
		{
			cout<<before;//??????????
		    cout<<endl;//??
			L=l;//????????l
			for(j=0;j<l;j++)
				before[j]=word[j];
			before[l]='\0';//?????????before?
		}
		else
		{
			cout<<before<<" ";//???????????
		
			for(j=0;j<l;j++)
				before[j]=word[j];
			before[l]='\0';//?????????before?
			L=k;//???????k
		}
	}
	cout<<word;//??????????
	return 0;
}
