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
	char s[255]={'\0'},s1[255]={'\0'};int n,i,j;
scanf("%d",&n);
for(i=0;i<n;i++)
{   
	char s[255]={'\0'};char s1[255]={'\0'}; 
	scanf("%s",s);
    for(j=0;s[j]!='\0';j++)
	{
	  if(s[j]=='A')
	  {s1[j]='T';}
      if(s[j]=='T')
	  {s1[j]='A';}
	  if(s[j]=='C')
	  {s1[j]='G';}
	  if(s[j]=='G')
	  {s1[j]='C';}
	}
  printf("%s\n",s1); 

}    


return 0;
}