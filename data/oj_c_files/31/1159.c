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

typedef struct Node{
	char content[150];//??????????????????????????????)
	struct Node *next;//??????
	struct Node *front;
}node,*ptr;
main()
{
	char temp[150],std[4] = "end";//std???????
	ptr head = NULL,p,q;//head???
	while(1){
		gets(temp);
		if(strcmp(temp,std) != 0){
			p = (ptr)malloc(sizeof(node));
			strcpy(p->content,temp);
			p->next = NULL;
			p->front = NULL;
			if(head == NULL)
				head = p;
			else{
				q->next = p;
				p->front = q;
			}
			q = p;
		}
		else 
			break;
	}
	while(p != NULL){
		printf("%s\n",p->content);
		p = p->front;
	}
}
