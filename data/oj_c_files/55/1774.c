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
	char str[50],dest[50]={'\0'},trans[36];//??????????????
	                                        //trans[36]:???0~35???'0'~'9','A'~'Z'????
	int a,b,i,d,len;
	long num=0;                             //long??4???????????????31?
	for(i=0;i<10;i++)
		trans[i]='0'+i;
	for(i=10;i<36;i++)
		trans[i]='A'+i-10;
	cin>>a>>str>>b;
	for(i=0;str[i]!='\0';i++){                //?????a???????????
		if(str[i]>='0' && str[i]<='9')
			d=str[i]-'0';
		else if(str[i]>='a' && str[i]<='z')
			d=str[i]-'a'+10;
		else if(str[i]>='A' && str[i]<='Z')
			d=str[i]-'A'+10;
		num=num*a+d;                                  
	}                                         //????????????num
	i=0;
	do{                                       //???b?????????dest???
		dest[i++]=trans[num%b];               //???num==0???
		num=num/b;
	}while(num!=0);
	len=strlen(dest);                          //????????????dest????
	for(i=len-1;i>=0;i--)                      //????
		cout<<dest[i];
	return 0;
}

	
