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
	char word[20],newword[20];
	int i,j,len,n;
	scanf("%d",&n);
	for (i=0;i<n;i++)
	{
		scanf("%s",word);
		len=strlen(word);
		if(word[len-3]=='i'&& word[len-2]=='n'&& word[len-1]=='g')
		{
		   for (j=0;j<len-3;j++)
		   {
              newword[j]=word[j];
		   }
		   newword[j]='\0';
		}
		else 
		{
			 for (j=0;j<len-2;j++)
			 {
                newword[j]=word[j];
			 }
		     newword[j]='\0';
		
		}
		printf("%s\n",newword);
	}
	return 0;
}