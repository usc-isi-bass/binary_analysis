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
    char word[100][100];
   int i=0,j=0,k=0;
   char f[100];
   cin.getline(f,100);
   for(i=0;i<strlen(f);i++)
   {
       if(f[i]==' '){k++;j=0;continue;}
       word[k][j]=f[i];
       j++;
   }
   for(i=k;i>0;i--)
      cout<<word[i]<<" ";
      cout<<word[0]<<endl;
   return 0;
}
