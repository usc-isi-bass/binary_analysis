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

main()
{   char a[100],b[100];
    int i,j,f(char x);
    gets(a);
    gets(b);
    for(i=0;a[i]!='\0'&&b[i]!='\0';i++)
    {
      if(f(a[i])==1)a[i]-=32;
      if(f(b[i])==1)b[i]-=32;
      if(a[i]<b[i]){printf("<");break;}
      if(a[i]>b[i]){printf(">");break;}
    }
    if(a[i]==b[i]&&a[i]=='\0')printf("=");


}

int f(char x)
{ return (x>=97)&&(x<=122);
}