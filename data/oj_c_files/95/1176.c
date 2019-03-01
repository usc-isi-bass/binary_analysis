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



void main()
{
char c,text1[81],text2[81];int i=0;
gets(text1);printf("\n");gets(text2);printf("\n");
while(text1[i]!='\0')
  {
   if((text1[i]==text2[i])||(fabs(text1[i]-text2[i])==32)) {c='=';i++;}
   else if((text1[i]-text2[i])!=0)
    {if(text1[i]<'a')  text1[i]+=32;  if(text2[i]<'a')  text2[i]+=32; 
   if(text1[i]>text2[i])  c='>'; if(text1[i]<text2[i])  c='<';
   break;
 }
}
printf("%c",c);
}