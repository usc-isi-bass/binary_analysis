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
  char s[300];
  scanf("%s",s);
  int i=0,up[26]={0},down[26]={0},a=0;
  while(s[i]!='\0')
  {
	  if(s[i]>='A'&&s[i]<='Z'){   
		  up[s[i]-'A']++;
	  }else{ 
		  if(s[i]>='a' && s[i]<='z'){
			  down[s[i]-'a']++;
		  } else{
		  a++;
		  }
	  }
	  i++;
  }
  if(a==i){
	  printf("No");
  }
  for(i=0;i<26;i++) 
  {
    if(up[i]!=0)
      printf("%c=%d\n",i+'A',up[i]);
  }
  for(i=0;i<26;i++)
  {
	  if(down[i]!=0)
      printf("%c=%d\n",i+'a',down[i]);
  }
  return 0;
}
