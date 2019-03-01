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
  char str[101];
  char aword[101];
  char bword[101];
  char words[101][101];
  gets(str);
  cin>>aword;
  cin>>bword;
  int i;
  int j;
  int num=0;
  int len=strlen(str);
  for(i=0;i<len;i++)
  {
    j=0;
    while(str[i]!=' ')
     {
     words[num][j]=str[i];
     j++;
     i++;
     }
     words[num][j]='\0';
     num++;
  }
  for(i=0;i<num;i++)
  {
   if(strcmp(words[i],aword)==0)
   {
     strcpy(words[i],bword);
     continue;
   } 
  }
  
 
  for(j=0;j<num-1;j++)
  {
    cout<<words[j]<<" ";                 
  }
  cout<<words[num-1]<<endl;
  return 0;
  
}
