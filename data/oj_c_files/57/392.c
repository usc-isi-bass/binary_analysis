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
    int m=0;
    int n;
    int j=0;
    char s[50][20];
    scanf("%d",&n);
    for(m=0;m<n;m++)
    {
       scanf("%s",s[m]);
     }
     for(m=0;m<n;m++)
     {
         j=strlen(s[m]);
         if((s[m][j-1]=='r')&&(s[m][j-2]=='e')){
            s[m][j-2]='\0';
		 }
         else if((s[m][j-1]=='y')&&(s[m][j-2]=='l')){
            s[m][j-2]='\0';
		 }
         else if((s[m][j-1]=='g')&&(s[m][j-2]=='n')&&(s[m][j-3]=='i')){
             s[m][j-3]='\0';
		 }
      }
       for(m=0;m<n;m++)
    {
       printf("%s\n",s[m]);
     }
     return 0;
}
