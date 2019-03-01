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
    char s[101] = {0};
    while ( (scanf("%s", s) != EOF) )
    {
      int i,j;
	  int you=0;
	  int l1=strlen(s);
	  char a[101];
	  strcpy(a,s);
	  for(i=l1-1;i>=0;i--)
	  {
	    if(s[i]=='(') 
		{
			
			you=0;
		for(j=i+1;j<l1;j++)
		{

		  if(s[j]==')')
		  {
			s[i]=' ';
			s[j]=' ';
			you=you+1;
			break;
		  }
		}
		if(you==0) s[i]='$';
		}
	  }
	  puts(a);
	  
     for(i=0;i<l1;i++)
	 {
	   if(s[i]=='?'||s[i]=='$') printf("%c",s[i]);
       else if(s[i]==')') printf("?");
	   else printf(" ");
	 }
	 printf("\n");
	}
    return 0;
}
