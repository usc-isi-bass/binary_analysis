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

main()
{
int  A,B,C,as,bs,cs;       //??3???,????3??
char s[3]={0};
int i;
   for (A=1;A<=3;A++)      // ??A
     for (B=1;B<=3;B++)             // ??B
        for (C=1;C<=3;C++)          // ??C
          { as=(B>A)+(C==A);
      bs=(A>B)+(A>C);
      cs=(C>B)+(B>A);
      if (!((A>=B)&&(as>=bs)||(A>=C)&&(as>=cs)
           ||(B>=C)&&(bs>=cs)||(B>=A)&&(bs>=as)
           ||(C>=A)&&(cs>=as)||(C>=B)&&(cs>=bs)))
           {  
            s[A-1] = 'A';s[C-1] = 'C';s[B-1] = 'B';

           for(i=0;i<3;i++)printf("%c",s[i]);

             }    //????
       }   //????


}