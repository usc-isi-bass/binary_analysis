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
{
     int n,x,i,j;
     char str[100];
     scanf("%d",&n);
     for(i=1;i<=n+1;i++)
     {gets(str);
      x=strlen(str)-1;
      if(str[x]=='r'||str[x]=='y')
      {str[x-1]='\0'; printf("%s",str);printf("\n");}
      else
      {str[x-2]=0; printf("%s",str);printf("\n");}
     }
}

