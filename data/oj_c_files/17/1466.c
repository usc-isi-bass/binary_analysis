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

char s[1000];
char m[1000];
int match(int l){
	//&ordm;&macr;&Ecirc;&yacute;�&micro;&raquo;&Oslash;&Otilde;&Ograve;&micro;&frac12;&micro;&Auml;&Oacute;&Ograve;&Agrave;�&ordm;&Aring;&micro;&Auml;&Iuml;&Acirc;��
	int r = l;
	while(s[++r]!=')'){
		if(s[r]=='(')r=match(r);
		if(s[r]=='\0')break;
	}
	if(s[r]=='\0')m[l]='$';
	return r; 
}
int nextL(int i){
	while(s[i]!='\0' && s[i]!='('){
		if(s[i]==')')m[i]='?';
		i++;	
	}
	return i;
}
int main(){
	int i,j,k;
	while(cin>>s){
		for(i=0;i<strlen(s);++i)m[i]=' ';
		m[i]='\0';
		i=0;
		i=nextL(i);
		while(s[i]!='\0'){
			i=match(i);
			if(s[i]=='\0')break;
			else i++;
			i=nextL(i);
		}
		cout<<s<<endl<<m<<endl;
	}
	return 0;
}
