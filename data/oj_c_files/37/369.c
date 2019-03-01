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
{int t,i,j,num[100][26]={0};
 char a[100][10000];
 scanf("%d\n",&t);
 for(i=0;i<t;i++)
 {for(j=0;;j++)
	 {scanf("%c",&a[i][j]);
 if(a[i][j]=='\n')break;}}
 for(i=0;i<t;i++)
 {{for(j=0;;j++)
	     if(a[i][j]!='\n')
		 num[i][a[i][j]-'a']++;
		 else break;}
   for(j=0;;j++)
	   if(a[i][j]!='\n')
	   {if(num[i][a[i][j]-'a']==1){printf("%c\n",a[i][j]);break;}}
	   else break;
	   if(a[i][j]=='\n')printf("no\n");}
}
 



