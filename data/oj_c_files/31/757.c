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

struct s{
	char xuehao[20];
	char xingming[20];
	char xingbie;
	int age;
	char score[20];
	char add[20];
	struct s *next;
};
int main(){
	struct s *A(void);
	struct s *head,*p;
	head=A();
	p=head;
	if(head!=NULL){
		while(p->next!=NULL){
			printf("%s %s %c %d %s %s\n",p->xuehao,p->xingming,p->xingbie,p->age,p->score,p->add);
			p=p->next;
		}
		printf("%s %s %c %d %s %s\n",p->xuehao,p->xingming,p->xingbie,p->age,p->score,p->add);
	}
	return 0;
} 

struct s *A(void){
	struct s *head,*p1,*p2;
	head=(struct s*)malloc(sizeof(struct s));
	scanf("%s %s %c %d %s %s",head->xuehao,head->xingming,&head->xingbie,&head->age,head->score,head->add);
	head->next=NULL;
	p1=head;
	for(;;){
		p2=(struct s*)malloc(sizeof(struct s));
		scanf("%s",p2->xuehao);
		if(strcmp(p2->xuehao,"end"))
			scanf(" %s %c %d %s %s",p2->xingming,&p2->xingbie,&p2->age,p2->score,p2->add);
		else 
			break;
		p2->next=p1;
		p1=p2;
	}
	p2->next=p1;
	return (p1);
}