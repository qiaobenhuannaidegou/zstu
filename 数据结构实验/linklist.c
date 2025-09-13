#include "linklist.h"
#include "fatal.h"
#include <stdlib.h>

int IsEmpty(List L)
{
    return L->Next==NULL;
}


List MakeEmpty(List L)
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.\n");
    else
        while(!IsEmpty(L))
        {
            Position P=L->Next;
            while(P->Next!=NULL)
            {
                P=P->Next;
            }
            P=NULL;
            free(P);
        }
    return L;
}

int IsLast( Position P, List L )
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.\n");
    else
    {
        Position TempP=L->Next;
        while(TempP->Next!=NULL)
        {
            TempP=TempP->Next;
        }
        return TempP==P;
    }
}

Position Find( ElementType X, List L )
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.\n");
    else
    {
        Position TempP=L->Next;
        while(TempP->Element!=X && TempP!=NULL)
        {
            TempP=TempP->Next;
        }
        return TempP;
    }
}

Position FindPrevious( ElementType X, List L )
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.\n");
    else
    {
        Position TempP=L->Next;
        while(TempP->Next->Element!=X && TempP->Next!=NULL)
        {
            TempP=TempP->Next;
        }
        return TempP;
    }
} 

void Delete( ElementType X, List L )
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.\n");
    else
    {
        Position TempP=FindPrevious(X,L);
        if(TempP!=NULL && TempP->Next!=NULL)
        {
            Position P=TempP->Next;
            TempP->Next=P->Next;
            P->Next=NULL;
            free(P);
        }
        else
            Error("Element not in this List.\n");
    }
}

void Insert( ElementType X, List L, Position P )
{
    Position TempP=(Position)malloc(sizeof(struct Node));
    if(TempP==NULL)
        Error("Fail to malloc.\n");
    
    TempP->Element=X;
    TempP->Next=P->Next;
    P->Next=TempP;
}

List InsertAtEnd(List L, ElementType X) {
    Position NewNode = (Position)malloc(sizeof(struct Node));
    if (NewNode == NULL) 
        Error("Fail to malloc\n");
    NewNode->Element = X;
    NewNode->Next = NULL;
    if (L == NULL) 
    {
        return NewNode;
    } 
    else 
    {
        struct Node *P = L;
        while (P->Next != NULL) {
            P = P->Next;
        }
        P->Next = NewNode;
        return L;
    }
}

void PrintList(List L)
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.");
    else
    {
        int position=1;
        Position MoveP=L->Next;
        while (MoveP!=NULL)
        {
           printf("%d th node:%d\n",position,MoveP->Element);
           MoveP=MoveP->Next;
           position++;
        }
        printf("\n");
    }
}

List MakeLinklist(void)
{
    int Choice=-1;
    int Times=1;
    List L;
    while(Choice!=0)
    {
        printf("======DX:The %dth Round======\n",Times);
        printf("Create a list following the input order:1\n");
        printf("Create a list in a reversed order as the input order:2\n");
        printf("Exit:0\n");
        scanf("%d",&Choice);
        
        if(Choice==0)
            break;
        if(Choice==1)
        {
        	L->Next=NULL;
            printf("Please input some integer values to create the list, input 0 for exit!\n");
            int X;
            scanf("%d",&X);
            while(X!=0)
            {
                L=InsertAtEnd(L,X);
                scanf("%d",&X);
            }
        }
        if(Choice==2)
        {
        	L->Next=NULL;
            printf("Please input some integer values to create the list, input 0 for exit!\n");
            int X;
            Position head=L;
            scanf("%d",&X);
            while (X!=0)
            {
                Insert(X,L,head);
                scanf("%d",&X);
            }
            head->Element=NULL;
        }
        PrintList(L);
        Times++;
    }
    return L; 
}

Position GetLast(List L)
{
    if(IsEmpty(L))
        return NULL;
    else
    {
        Position MoveP=L;
        while (MoveP->Next!=NULL)
        {
            MoveP=MoveP->Next;
        }
        return MoveP;
    }
}

int Size(List L)
{
    int size=0;
    Position MoveP=L;
    while (MoveP->Next!=NULL)
    {
        size++;
        MoveP=MoveP->Next;
    }
    return size;
}


int main()
{
    List L=MakeLinklist();
    printf("Is Empty?:%d\n",IsEmpty(L));
    printf("Size:%d\n",Size(L));
}
