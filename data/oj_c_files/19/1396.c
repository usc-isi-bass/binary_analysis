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
 char word[50][20];
 char s[100],a[100],b[100],e[100];
 int i=0,j=0,k=0;
 gets(s);
 while (1)
 {
  if (s[i]!=' '&&s[i]!='\0')
  {
   e[j]=s[i];
   j++;
  }
  else if(s[i]==' ')
  {
   e[j] = '\0';
   strcpy(word[k],e);
   j=0;
   k++;
  }
   else if(s[i]=='\0')
  {
   e[j] = '\0';
   strcpy(word[k],e);
   break;
  }
  i++;
 }
	gets(a);
	gets(b);
	for(i=0;i<=k;i++)
	{
		if (strcmp(a,word[i])==0)
			strcpy(word[i],b);
	}
	for(i=0;i<k;i++)
		printf("%s ",word[i]);
	printf("%s",word[k]);
	return 0;
}
