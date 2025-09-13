#include "arraylist.h"
#include "fatal.h"
#include <stdlib.h>

int IsEmpty( List L )
{
    return L->length==0;
}

List MakeEmpty( List L )
{
    if(IsEmpty(L))
        Error( "Must use CreateArray first.\n" );
    else
    {
        while (!L)
        {
            return NULL;
        }
        L->length=0;
        return L;
    }
}

int IsLast(List L, int p)
{
    return L->length-1==p;
}

int Find( ElementType X, List L )
{
	int i;
    for(i=0;i<L->length;i++)
    {
        if(L->data[i]==X)
        {
            return i;
        }
    }
    return -1;
}

void Delete( ElementType X, List L )
{
    int Position=Find(X,L);
    int i;
    for(i=Position;i<L->length;i++)
    {
        L->data[i]=L->data[i+1];
    }
    L->length--;
}

int FindPrevious( ElementType X, List L )
{
    int Position=Find(X,L);
    if(Position==-1)
    {
        Error("Do not Find X.\n");
        return -1;
    }    
    else
        return Position-1;
}

void Insert( ElementType X, List L, int P )
{
    if(L->length>Max_Size)
        Error("Out of space!\n");
    else if(P<0 || P>L->length)
        Error("Please input the right position of the target.\n");
    else
    {
    	int i;
        for(i=L->length;i>P;i--)
        {
            L->data[i]=L->data[i-1];
        }
        L->data[P]=X;
        L->length++;
    }
}

List MakeArray(void)
{
    int Choice=-1;
    int Times=1;
    List L=(List)malloc(sizeof(struct AList));
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
        	L->length=0;
            printf("Please input some integer values to create the list, input 0 for exit!\n");
            int X;
            scanf("%d",&X);
            while(X!=0)
            {
                L->data[L->length]=X;
                L->length++;
                scanf("%d",&X);
            }
        }
        if(Choice==2)
        {
        	L->length=0;
            printf("Please input some integer values to create the list, input 0 for exit!\n");
            int X;
            scanf("%d",&X);
            while (X!=0)
            {
            	Insert(X,L,0);
                scanf("%d",&X);
            }
        }
        PrintList(L);
		Times++;
    }
    return L;
}

int IsFull(List L)
{
    return L->length==Max_Size;
}

int GetLast(List L)
{
    if(IsEmpty(L))
        Error( "Must use CreateArray first.\n" );
    else
        return L->data[L->length-1];
}

int Size(List L)
{
    return L->length;
}

void PrintList(List L)
{
    if(IsEmpty(L))
        Error("Must use CreatLinklist first.");
    else
    {
    	int i;
        for(i=0;i<L->length;i++)
        {
            printf("%d th node:%d\n",i+1,L->data[i]);
        }
    }
    printf("\n");
}

int main()
{
	List L=MakeArray();
    printf("Is Empty?:%d\n",IsEmpty(L));
    printf("Is Full?%d\n",IsFull(L));
    printf("Size:%d\n",Size(L));
}
