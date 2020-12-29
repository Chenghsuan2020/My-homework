#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//https://e-tutor.itsa.org.tw/e-Tutor/mod/programming/view.php?id=1289
struct Lnode
{
	int num; 
	struct Lnode *next;
};

struct Lnode *insert(struct Lnode *L,int num)
{
	struct Lnode *p;
	p = malloc(sizeof(struct Lnode));
	p->num = num;
	p->next = L;
	return p;
}


void print(struct Lnode *L)
{
	struct Lnode *p;
	p = L;
	while(p)
	{
		if( p->next == NULL)
		{
			printf("%d",p->num);
		}
		else
		{
			printf("%d ",p->num);
		}
		p = p->next;
	}
	printf("\n");
	
}

int main()
{
	int num_temp = 0;
	struct Lnode *termlist =NULL;
	while(scanf("%d", &num_temp)!=EOF)
	{   
			termlist = insert(termlist,num_temp);
	}
	print(termlist);
}