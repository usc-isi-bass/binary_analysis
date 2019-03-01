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
	int cout=0,len=0,flag=0,b=0;
	double lv,a;
	char slv[10],s[500],z[500];
	gets(slv);
	lv=atoi(slv);
	gets(s);
	gets(z);
	len=strlen(s);
	if(strlen(s)==strlen(z)){
	for(int i=0;s[i]!='\0';i++){
	if(s[i]==z[i])
		cout++;
	if(s[i]!='A'&&s[i]!='T'&&s[i]!='C'&&s[i]!='G')
		b=1;
	if(z[i]!='A'&&z[i]!='T'&&z[i]!='C'&&z[i]!='G')
		b=1;
	}
	a=cout*1.0/len;
	flag++;
	}
	if(flag==0||b==1)
		printf("error");
	else{
	if(a>lv){
		printf("yes");}
	else
		printf("no");}
	return 0;
}
