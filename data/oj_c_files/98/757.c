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
	char word[41];//??????
	int sum=0,n,t;
	cin>>n;//?????
	t=n;
	while(n>0)//?????????
	{
		scanf("%s",word);//????
		if(n!=t)
		{
		if((sum+strlen(word))<=80){cout<<" ";}//?????80???????
		if((sum+strlen(word))>80) {cout<<endl,sum=0;}//??80???????
		}
		sum=sum+strlen(word);//?????
		cout<<word;//????
		memset(word,0,sizeof(word));//????
		n--;//?????
		sum++;//????1
	}
	
	return 0;//??
 }