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
    int n,i;
    char s[50][10];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%s",s[i]);
    for(i=0;i<n;i++)
    {if(s[i][strlen(s[i])-2]=='e'||s[i][strlen(s[i])-2]=='l')
      s[i][strlen(s[i])-2]='\0';
     else  s[i][strlen(s[i])-3]='\0';}
     for(i=0;i<n;i++)
     printf("%s\n",s[i]);
	 return 0;
} 
 