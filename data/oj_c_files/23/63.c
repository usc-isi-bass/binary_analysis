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
   int i,n;
//=============??????????????===========
//   char ch[100];
//   gets(ch);
//   n=strlen(ch);
//   for(i=n-1;i>=0;i--)
//   {  
//       printf("%c",ch[i]);
//   }
//====================================================
     char ch[100][100];   //??????
     n=0;
     scanf("%s",ch[0]);
     for(i=1;i<100;i++)
        {
		 if(getchar()!='\n') {
             scanf("%s",ch[i]);            
             n=n+1;
		 }
		  else break;       
         }

     for(i=n;i>=1;i--){printf("%s ",ch[i]);}
     printf("%s",ch[0]);
}
