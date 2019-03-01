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

void dnapair(char*str)
{
int p=0;
while(str[p]!='\0')
{
switch(str[p]){
case'A':str[p++]='T';break;
case'T':str[p++]='A';break;
case'C':str[p++]='G';break;
case'G':str[p++]='C';break;
}}
}
int main(){
int n;
char str[1221];
scanf("%d",&n);
for(int i=0;i<n;i++){
scanf("%s",str);
dnapair(str);
printf("%s\n",str);
}
return 0;
}
