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
	int i,sum,l;
	char s[1000];
	cin>>s;
	l=strlen(s);
	for(i=0;i<l;i++){
		if(s[i]>='a'&&s[i]<='z')s[i]-=32;
	}
	for(i=0;i<l;i++){
		if(s[i]=='\0')break;
		sum=1;
		while(s[i]==s[i+1]){
			i++;
			sum++;
		}
		 cout<<"("<<s[i]<<","<<sum<<")";
	}
	return 0;
}
