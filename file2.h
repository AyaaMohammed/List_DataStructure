typedef struct list{
	ListEntry entry[MAXLIST];
	int size;
}List;
void CreatList(list *p1);
int  ListEmpty(list *p1);
int  ListFull(list *p1); 
int  ListSize(list *p1);
void DestroyList(list*p1);
void InsertList(int p,ListEntry e,List *p1);
void DeleteList(int p,ListEntry *pe,List*p1);
void RetrieveList(int p,ListEntry *pe,List*p1);
void ReplaceList(int p,ListEntry e,List*p1);
void TraverseList(List*p1,void (*Visit)(ListEntry));