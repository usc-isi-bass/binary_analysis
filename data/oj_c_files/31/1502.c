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


struct student
{
	char num[30];
	char name[30];
	char s;
    float grad1;
	float grad2;
	char add[30];
	struct student *next,*prev;
};

void main()
{
	struct student *head,*temp,*end;
	head=(struct student *)malloc(sizeof(struct student));
	temp=head;
	head->prev=0;


	while(1)
	{
scanf("%s",temp->num);
if(strcmp(temp->num,"end")==0)
break;

scanf("%s %c %f %f %s",temp->name,&temp->s,&temp->grad1 ,&temp->grad2,temp->add );

temp->next=(struct student *)malloc(sizeof(struct student));
temp->next->prev =temp;
temp=temp->next;

}
end=temp->prev;
end->next=0;


temp=end;
while(temp!=0)
{
	printf("%s %s %c %g %g %s\n",temp->num ,temp->name,temp->s,temp->grad1 ,temp->grad2,temp->add );
	temp=temp->prev;
}
}