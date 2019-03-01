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

main()
{
	struct stu
	{
	    char num[10];
    	char name[32];
     	char sex;
    	int age;
    	float score;
    	char address[32];
     	struct stu *next;
	};
	struct stu *p1,*p2;
	p1=(struct stu *)malloc(len);
	p1->next=NULL;
	int i;
	for(i=0;;i++)
	{
		scanf("%s",p1->num);
		if(!strcmp(p1->num,"end"))
			break;
    	scanf("%s %c %d %g %s",p1->name,&p1->sex,&p1->age,&p1->score,p1->address);
		p2=(struct stu *)malloc(len);
        p2->next=p1;
		p1=p2;
	}
	p1=p1->next;
	while(p1)
	{
		printf("%s %s %c %d %g %s\n",p1->num,p1->name,p1->sex,p1->age,p1->score,p1->address);
		p1=p1->next;
	}
}