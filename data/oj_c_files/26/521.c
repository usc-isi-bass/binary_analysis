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

int main(){
	char a[101];//??????
	cin.getline(a,101);//??
	int flag=0;//?????
	for(int i=0;i<strlen(a);i++)
	    {
		if(a[i]==' ') flag++;//?????flag??
		else {
			if(flag>1){
				for(int j=i;j<strlen(a);j++)
					a[j-flag+1]=a[j];//?????????
				for(int j=strlen(a)-flag+1;j<strlen(a);j++)
					a[j]='\0';  //?????????????
				}
				i=i-flag;//i????????flag?
			    flag=0;//flag??
			 }
		}
	cout<<a<<endl;//?????
	}
