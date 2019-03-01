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
	char input[500][200],letter;
	int row,i,j;
	for (i=0;i<500;i++)
	{
		for (j=0;j<200;j++)
		{
			input[i][j]='\0';
		}
	}
	i=0;
	j=0;
   while(1)
	{
		
		letter=getchar();
		if (letter!=' '&&letter!='\n')
		{
			input[i][j]=letter;
			j++;
		}
		else if(letter==' ')
		{
			i++;
			j=0;
		}
		if(letter=='\n')
		{
			row=i;
			break;
		}
   }
 
   int LEN[500];
   for(i=0;i<row;i++)
   {
	   LEN[i]=strlen(input[i]);
	   if(LEN[i]!=0)
	   printf("%d,",LEN[i]);
   }
   LEN[row]=strlen(input[row]);
   printf("%d",LEN[row]);
   
	return 0;
}