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
    int i,ii;
    char res[100][20];
    int p=0;
    char c,sub1[20],sub2[20];
    char str[20],substr[5];
while(scanf("%s %s", str,substr)!=EOF)
{
                c=0;
      for(i=0;i<strlen(str);i++)
     if(str[i]>c) {c=str[i]; ii=i;}
          strcpy(sub1,str);
     sub1[ii+1]='\0';
     strcpy(sub1,strcat(sub1,substr));
     for(i=ii+1;i<strlen(str);i++)
     sub2[i-ii-1]=str[i];
     sub2[strlen(str)-ii-1]='\0';
     strcpy(res[p],strcat(sub1,sub2));
                p++;
}
for(i=0;i<p;i++)
printf("%s\n",res[i]);
}
