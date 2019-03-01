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


int isright(char *s,char *w,int i){
char t[50];
int j;
for(j=0;j<strlen(s);j++)
{  t[j]=w[i+j];}
t[strlen(s)]='\0';
if(strcmp(s,t)==0)
return 1;
else
return 0;
}

int main(){
char s[50],w[50];
int i;
scanf("%s %s",s,w);
for(i=0;i<=strlen(w)-strlen(s);i++)
{
   if(isright(s,w,i))
     {printf("%d",i);break;}
}
return 0;
}