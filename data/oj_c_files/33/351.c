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
{int n,i,j,l,leap;
char s[256],s1[2],s2[2];
 scanf("%d",&n);
 
 for(i=0;i<n;i++)
 {  scanf("%s",s);
 l=strlen(s);
 for(j=0;j<l;j++)
 {leap=0;
 if(s[j]=='A'&&leap==0) {s[j]='T';leap=1;}
 if(s[j]=='T'&&leap==0) {s[j]='A';leap=1;}
 if(s[j]=='G'&&leap==0) {s[j]='C';leap=1;}
 if(s[j]=='C'&&leap==0) {s[j]='G';leap=1;}
 
 }
 printf("%s\n",s);
 for(j=0;j<l;j++)
	 s[j]='\0';
 }


 return 0;
}