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

int a;
char str[100];
void find(void);
int main()
{
	int i;
	while(cin>>str){//?????
		cout<<str<<endl;
		a=strlen(str);//????????
		find();//
		for(i=0;i<a;i++){
			if(str[i]=='(')cout<<"$";//?????????????
			else{
				if(str[i]==')')cout<<"?";//
				else cout<<" ";
			}
		}
		cout<<endl;
	}
	return 0;
}
void find(void){//?????????????
	int i=0;
	int p=-1,q=-1;
	for(i=0;i<a;i++){
		if(str[i]!='('&&str[i]!=')') str[i]='\0';//???????
		if(str[i]=='(')p=i;//????????????
		if(p!=-1&&str[i]==')'){q=i;break;}//???????????
	}
	if(p!=-1&&q!=-1){str[p]='\0';str[q]='\0';find();}//??????????????
}