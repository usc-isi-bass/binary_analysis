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
    char s[1000];
    char words[300][20];
    gets(s);
    int i,j,n,k;
    int sum;
    n = 0; k = 0;
    for (i = 0; s[i] != 0; i++) 
    {
        if (s[i] == ' ') 
        {
            s[i] = '\0';
            strcpy(words[n], (s + k));
            n++;
            k = i + 1;
        }
    }
    strcpy(words[n], (s + k));
    n++;
    
    sum=strlen(words[0]);
    if(sum!=0)
    {
    printf("%d",sum);}
    for(i=1;i<n;i++)
    {
      int result=0;  
      result=strlen(words[i]);
      if(result==0)
      {
        continue;}
      if(result!=0)
      {
      printf(",%d",result);}
    }
    return 0;
}
