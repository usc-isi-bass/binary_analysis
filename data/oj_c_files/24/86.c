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

void main()
{
	int i,j;
	char word[40],Max_word[40]="",Min_word[40]="afwefjaklwejfioajwe";
	do
	{
		scanf("%s",word);
		if (strlen(word)>strlen(Max_word)) strcpy(Max_word,word);
		if (strlen(word)<strlen(Min_word)) strcpy(Min_word,word);
	} while (getchar()!='\n');
	puts(Max_word);
	puts(Min_word);
}