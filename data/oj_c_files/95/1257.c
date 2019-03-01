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
	char sen1[81],sen2[80];
	cin.getline(sen1,80);
	cin.getline(sen2,80);//????? 
	int n = strlen(sen1), m = strlen(sen2);
	for (int i = 0; i < n; i++) sen1[i] = tolower(sen1[i]);
	for (int i = 0; i < m; i++) sen2[i] = tolower(sen2[i]);//????? 
	puts(strcmp(sen1,sen2)==0?"=":(strcmp(sen1,sen2)>0?">":"<"));//??????? 
	return 0;
}