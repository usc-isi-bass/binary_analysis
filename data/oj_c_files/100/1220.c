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

int main(int argc, char* argv[])
{
char str[300],*ps,i;
int count=0;
scanf("%s",str);
for(i=0;str[i]!='\0';i++){
if(str[i]>='a'&&str[i]<='z')
count++;
}
if(count==0)
printf("No");
else{
for(i=97;i<=122;i++){
count=0;
for(ps=str;*ps!='\0';ps++){ 
if(*ps==i){
count++;
}
}
if(count!=0)
printf("%c=%d\n",i,count);
}
}
return 0;
}
