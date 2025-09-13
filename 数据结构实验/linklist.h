        typedef int ElementType;

/* START: fig3_6.txt */
        #ifndef _LinkList_H
        #define _LinkList_H

        struct Node;
        typedef struct Node *PtrToNode;
        typedef PtrToNode List;
        typedef PtrToNode Position;

        List MakeEmpty( List L );
        int IsEmpty( List L );
        int IsLast( Position P, List L );
        Position Find( ElementType X, List L );
        void Delete( ElementType X, List L );
        Position FindPrevious( ElementType X, List L );
        void Insert( ElementType X, List L, Position P );
        List MakeLinklist(void);

        ///////////////////////////////////////////
        Position GetLast(List L);
        int Size(List L);
        void PrintList(List L);

       struct Node
        {
            ElementType Element;
            Position    Next;
        };

        #endif    /* _linklist_H */
/* END */
