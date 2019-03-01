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
char s[100],a[100];
int i;
gets(s);
gets(a);
for(i=0;s[i]!='\0';i++){
if(s[i]>='A'&&s[i]<='Z'){
s[i]=s[i]+32;
}
if(a[i]>='A'&&a[i]<='Z'){
a[i]=a[i]+32;
}
}
for(i=0;i<100;i++){
if(s[i]<a[i]){
printf("<");
break;
}
else if(s[i]>a[i])
{
printf(">");
break;
}
else if(s[i]==a[i]&&s[i]=='\0'){
printf("=");
break;
}

}
return 0;
}
