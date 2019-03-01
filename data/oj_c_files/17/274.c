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

void pro(char *s)
{
	char a[444];
	char *p;
	int i,j,k,t;
	i=-1;
	p=s;
	while(*p!='\0')
	{
		if (*p=='(') {i++; a[i]=*p;}
	    else if (*p==')')
	    { 
		j=i;
		while ((j>=0) && (a[j]!='(')) j--;
		if (j==-1) {i++; a[i]=*p;} else {a[j]=' '; i++; a[i]=' ';}
	     }
	     else {i++; a[i]=' ';}
		p++;
	}

	a[i+1]='\0';
	strcpy(s,a);
	
}

void print(char *s)
{
	char *p;
	p=s;
	while (*p!='\0') 
	{if (*p=='(') *p='$'; else if (*p==')') *p='?';
	 p++;
	}
     puts(s);
}
int main()
{  
	int l;
	char s[323];
	//freopen("tt.in","r",stdin);
	//freopen("tt.out","w",stdout);
	gets(s);
	while (s[0]!='\0')
	{
		
		puts(s);
		pro(s);
		print(s);
		s[0]='\0';
		gets(s);
	}
	return 0;
}