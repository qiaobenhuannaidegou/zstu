#define Max_Size 100
typedef int ElementType;


        #ifndef _ArrayList_H
        #define _ArrayList_H

        struct AList;
        typedef struct AList *List;

        List MakeEmpty( List L );
        int IsEmpty( List L );
        int IsLast(List L, int p);
        int Find( ElementType X, List L );
        void Delete( ElementType X, List L );
        int FindPrevious( ElementType X, List L );
        void Insert( ElementType X, List L, int P );
        List MakeArray(void);

        ///////////////////////////////////////////
        int IsFull(List L);
        int GetLast(List L);
        int Size(List L);
        void PrintList(List L);

        ///////////////////////
      struct AList{
	ElementType data[Max_Size];
	int length;
};
       ////////////////////////


        #endif    /* _linklist_H */
/* END */
