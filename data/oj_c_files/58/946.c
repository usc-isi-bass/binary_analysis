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
	int n;
	cin>>n;
	char c;
	c=getchar();
	int flag=1,first=1;
	while(c=getchar()){
		if(c=='\n'){
			if(flag)cout<<1<<endl;
			else cout<<0<<endl;
			flag=1;first=1;n--;
			if(n==0)return 0;
		}else{
			if(first){
				flag=(c=='_'||(c>='a'&&c<='z')||(c>='A'&&c<='Z'));	
				first=0;
			}else{
				flag=flag&&((c=='_')||(c>='a'&&c<='z')||(c>='A'&&c<='Z')||(c>='0'&&c<='9'));
			}
		}	
	}
	return 0;
}
