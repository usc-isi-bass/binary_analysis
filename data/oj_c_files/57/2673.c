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
int n,a;
char sz[100000];
scanf("%d",&n);
getchar();
for(int i=0;i<n;i++)
 {
   gets(sz);
   a=strlen(sz);
     if(sz[a-3]=='i'&&sz[a-2]=='n'&&sz[a-1]=='g'&&a!=3) 
       {sz[a-3]='\0';sz[a-2]='\0';sz[a-1]='\0';  puts(sz);  }
     else if(sz[a-2]=='e'&&sz[a-1]=='r'&&a!=2) 
            {sz[a-2]='\0';sz[a-1]='\0'; puts(sz);}
          else if(sz[a-2]=='l'&&sz[a-1]=='y'&&a!=2) 
                 {sz[a-2]='\0';sz[a-1]='\0'; puts(sz);}
  }
return 0;
}



