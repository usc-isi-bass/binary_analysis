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

//7. ???? ??? 20121109

char Str[100][100];     //?????

int main()
{
      int wordCount=0;
      int i=0;
      char a;   //??????
      cin.get(a);

      while(a!='\n')
      {
          while(a!=' '&&a!='\n')
          {
              Str[wordCount][i]=a;
              i++;
              cin.get(a);
          }
          wordCount++;
          i=0;
          if(a!='\n') cin.get(a);
      }

      for(i=99;i>0;i--)
        if(Str[i][0]!='\0') break;

      for(;i>0;i--)
      cout<<Str[i]<<' ';

      cout<<Str[0];

      return 0;
}
