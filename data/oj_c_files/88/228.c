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
 char *p,*head,c;
 p=(char *)malloc(sizeof(char)*30);
 head=p;
 scanf("%c",p);
 while(*p!='\n')
 {
 	p++,*p=getchar();
 }
 *p='\0';
 p=head;
 for(;*p!='\0';p++)
 {if(*p<='9'&&*p>='0')  printf("%c",*p);
  else if(*(p+1)<58&&*(p+1)>47)   putchar('\n');}
}