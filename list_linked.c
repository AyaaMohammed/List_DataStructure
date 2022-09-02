#include<stdio.h>
#include<stdlib.h>


int main(){
	//InsertList(0,e,&l);
	//InsertList(ListSize(&l),e,&l);
	
}
void CreatList(List*p1){
	p1->size=0;
}
int ListEmpty(List*p1){
	return !p1->size;
}
int ListFull(List*p1){
	return p1->size==MAXLIST;
}
int ListSize(List*p1){
	return p1->size;
}
void DeleteList(List*p1){
	p1->size=0;
}
void InsertList(int p,ListEntry e,List *p1){
	int i;
	for(i=p1->size-1;i>=p;i--){
		p1->entry[i+1]=p1->entry[i];
	}
	p1->entry[p]=e;
	p1->size++;
}
void DeleteList(int p,ListEntry*pe,List*p1){
	int i;
	*pe=p1->entry[p];
	for(i=p+1;i<=p1->size-1;i++){
		p1->entry[i-1]=p1->entry[i];
	}
	p1->size--;
}
void RetrieveList(int p,ListEntry *pe,List*p1){
	*pe=p1->entry[p];
}
void ReplaceList(int p,ListEntry e,List*p1){
	p1->entry[p]=e;
}
void TraverseList(List*p1,void (*Visit)(ListEntry)){
	int i;
	for(i=0;i<p1->size;i++){
		(*Visit)(p1->entry[i]);
	}
}

















 





















