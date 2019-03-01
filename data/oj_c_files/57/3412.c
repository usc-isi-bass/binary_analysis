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
     int n;
     scanf("%d",&n);
     for(int i=1;i<=n;i++)
     {
          char word[33];
          scanf("%s",word);
          int len;
          len=strlen(word);
          if(word[len-2]=='e'&&word[len-1]=='r')
          {
                for(int j=0;j<len-2;j++)
                    printf("%c",word[j]);
                printf("\n");
          }
if(word[len-2]=='l'&&word[len-1]=='y')
          {
                for(int j=0;j<len-2;j++)
                    printf("%c",word[j]);
 printf("\n");

          }
if(word[len-3]=='i'&&word[len-2]=='n'&&word[len-1]=='g')
          {
                for(int j=0;j<len-3;j++)
                    printf("%c",word[j]);
 printf("\n");

          }
}
}