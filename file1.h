typedef struct listnode{
	ListEntry entry;
	struct listnode *next;
}ListNode;
typedef struct list{
	ListNode *head;
	int size;
}List;
void CreatList(list *p1);
int  ListEmpty(list *p1);
int  ListFull(list *p1); 
int  ListSize(list *p1);
void DestroyList(list*p1);
int InsertList(int pos,ListEntry e,List *p1);
void DeleteList(int pos,ListEntry *pe,List*p1);
void RetrieveList(int pos,ListEntry *pe,List*p1);
void ReplaceList(int pos,ListEntry e,List*p1);
void TraverseList(List*p1,void (*Visit)(ListEntry));