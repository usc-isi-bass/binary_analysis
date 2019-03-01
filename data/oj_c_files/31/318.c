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

struct people
{
	char num[20];
	char name[20];
	char sex;
	char age[5];
	char score[10];
	char address[30];
};
struct people child[1000];
void main() 
{
	int i;
	for(i=0;;i++)
	{
		scanf("%s",child[i].num);
		if (strcmp(child[i].num,"end")==0)
			break;
		scanf("%s %c%s%s%s",child[i].name,&child[i].sex,child[i].age,child[i].score,child[i].address);
	}
	for(i--;i>=0;i--)
	{
		printf("%s %s %c %s %s %s\n",child[i].num,child[i].name,child[i].sex,child[i].age,child[i].score,child[i].address);
	}
}
