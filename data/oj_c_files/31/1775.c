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

typedef struct Student
{
	char ALL[100];
	struct Student *pNext;
	struct Student *pPrev;
}Stu;
int main(void)
{
	Stu *pRoot=(Stu *)malloc(sizeof(Stu));
	Stu *pNow=pRoot;
	pRoot->pPrev=NULL;
	for(;;)
	{
		gets(pNow->ALL);
		if(strcmp("end",pNow->ALL))
		{
			pNow->pNext=(Stu *)malloc(sizeof(Stu));
			pNow->pNext->pPrev=pNow;
			pNow=pNow->pNext;
		}
		else break;
	}
	pNow=pNow->pPrev;
	for(;;)
	{
		puts(pNow->ALL);
		if(pNow->pPrev==NULL) break;
		pNow=pNow->pPrev;
	}
	return 0;
}