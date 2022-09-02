#include<stdio.h>
#include<stdlib.h>


int main(){
	
}
void CreatList(list *p1){
	p1->head=NULL;
	p1->size=0;
}
int  ListEmpty(list *p1){
	return(p1->size==0);
}
int  ListFull(list *p1) {
	return 0;
}
int  ListSize(list *p1){
	return p1->size;
}
void DestroyList(list*p1){
	ListNode*q;
	while(p1->head){
		q=p1->head->next;
		free(p1->head);
		p1->head=q;
	}
	p1->size=0;
}
void TraverseList(List*p1,void (*Visit)(ListEntry)){
	ListNode*p=p1->head;
	while(p){
		(*Visit)(p->entry);
		p=p->next;
	}
}
int InsertList(int pos,ListEntry e,List *p1){
	ListNode*p,*q;
	int i;
	if(p=(ListNode*)malloc(sizeof(ListNode))){
	p->entry=e;
	p->next=NULL;
	if(pos==0){
		p->next=p1->head;
		p1->head=p;
	}
	else{
		for(q=p1->head,i=0;i<pos-1;i++){
			q=q->next;
		}
		p->next=q->next;
		q->next=p;
	}
	p1->size++;
	return 1;
	}
	else{
		return 0;
	}
}
void DeleteList(int pos,ListEntry *pe,List*p1){
	int i;
	ListNode*q,*tmp;
	if(pos==0){
		*pe=p1->head->entry;
		tmp=p1->head->next;
		free(p1->head);
		p1->head=tmp;
	}
	else{
		for(q=p1->head,i=0;i<pos-1;i++){
			q=q->next;
		}
		*pe=q->next->entry;
		tmp=q->next->next;
		free(q->next);
		q->next=tmp;
	}
	
	p1->size--;
}
void RetrieveList(int pos,ListEntry *pe,List*p1){
	int i;
	ListNode*q;
	for(q=p1->head,i=0;i<pos;i++){
			q=q->next;
		}
		*pe=q->entry;
}
void ReplaceList(int pos,ListEntry e,List*p1){
	int i;
	ListNode*q;
	for(q=p1->head,i=0;i<pos;i++){
			q=q->next;
		}
    q->entry=e;
}
typedef struct list{
	ListNode*head,*current;
	int size,currentpos;
}List;





















