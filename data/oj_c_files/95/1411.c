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

int compare(char s1[],char s2[]){
	int k=0;
	for(int i=0;s1[i]!='\0';++i){
		if(s1[i]>=65&&s1[i]<=90)
			s1[i]+=32;
	}
	for(int i=0;s2[i]!='\0';++i){
		if(s2[i]>=65&&s2[i]<=90)
			s2[i]+=32;
	}
	k=strcmp(s1,s2);
	return k;
}

int main()
{	char str1[81],str2[81];
int a,i;
    cin.getline(str1,81);
	cin.getline(str2,81);
	a=compare(str1,str2);
   if(a==0)
	   cout<<'='<<endl;
   if(a>0)
	   cout<<'>'<<endl;
   if(a<0)
	   cout<<'<'<<endl;
	return 0;
}