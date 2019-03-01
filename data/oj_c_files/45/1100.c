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

int main(){
  int j,k,i=0;
char ch[50],str[50],ss[50];
scanf("%s  %s",ch,str);
while(ch[i++]);i=i-1;
for(j=0;str[j+i];j++)
{for(k=0;k<i;k++)ss[k]=str[j+k];
 ss[k]='\0';
 if( strcmp(ss,ch)==0  )break;}
printf("%d",j);
} 