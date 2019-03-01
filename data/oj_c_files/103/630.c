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
char s[255];
char *p=s;
int i=0,j=1;

scanf("%s",s);
if(strlen(s)>255){
 

}
while(i<strlen(s))
{
	while(*p!='\0') 
	{
      if(*p>='A' && *p<='Z') 
	  *p=*p+32;
      *p++;
    }
  if(s[i]==s[i+1])
   j++;
 else{
   printf("(%c,%d)",s[i]-'a'+'A',j);
   j=1;
}
i++;
}
} 