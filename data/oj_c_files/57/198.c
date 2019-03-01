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


void main()
{int n;
 char s[20];
 int i;
 int p;
 char c[100][20];
 scanf("%d",&n);
 for(i=0;i<n;i++)
 {	 scanf("%s",&c[i]);
 }
for(i=0;i<n;i++)
{
     p=strlen(c[i]);
	 
	 if(c[i][p-2]=='e' && c[i][p-1]=='r')
	 { 
		 strncpy(s,c[i],p-2);
          s[p-2]='\0';
		 printf("%s\n",s);
		 
	 }
	 else if(c[i][p-2]=='l' && c[i][p-1]=='y')
	 {
		 strncpy(s,c[i],p-2);
                 s[p-2]='\0';
		 printf("%s\n",s);

	 }
	 else 
	 {   strncpy(s,c[i],p-3);
	     s[p-3]='\0';
		 printf("%s\n",s);
	 }
 }
}