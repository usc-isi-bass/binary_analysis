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


struct stu{
	char info[50];
	struct stu *next;
};

int main(int argc, char* argv[])
{
	struct stu *head,*p1,*p2;
	p2=NULL;
	while(1){
		p1=(struct stu*)malloc(LEN);
		gets(p1->info);
		if(strcmp(p1->info,"end")==0){
			break;
		}
		p1->next=p2;
		p2=p1;
	}
	head=p2;
	p1=head;
	while(1){
		printf("%s\n",p1->info);
		if(p1->next==NULL){
			break;
		}
		p1=p1->next;
		free(p2);
		p2=p1;
	}
	return 0;
}
