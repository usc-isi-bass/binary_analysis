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


void find()
{
	char ch[101];
	
	memset(ch,'\0',sizeof(ch));
	while(cin.getline(ch,1000,'\n')){
	cout<<ch<<endl;
	int i=0,j=0;
	int num=0;
	for(i=0;i<100;i++)//???????????????
		if(ch[i]=='('){num=0;
			for(j=i;j<100;j++){
				if(ch[j]=='(')num++;
				if(ch[j]==')')num--;
				if(num==0)break;}
			if(num>0)ch[i]='$';
		}
	for(i=99;i>=0;i--)
		if(ch[i]==')'){num=0;
			for(j=i;j>=0;j--){
				if(ch[j]=='(')num++;
				if(ch[j]==')')num--;
				if(num==0)break;}
			if(num<0)ch[i]='?';
		}
	int len;
	len=strlen(ch);
	for(i=0;i<len;i++)
		if(ch[i]!='$'&&ch[i]!='?')
			ch[i]=' ';
	cout<<ch<<endl;}
}
int main()
{
	
	find();
		return 0;
}