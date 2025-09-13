#include "stackli.h"
#include "fatal.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

/* START: fig3_40.txt */
        int
        IsEmpty( Stack S )
        {
            return S->Next == NULL;
        }
/* END */

/* START: fig3_41.txt */
        Stack
        CreateStack( void )
        {
            Stack S;

            S = malloc( sizeof( struct Node ) );
            if( S == NULL )
                FatalError( "Out of space!!!" );
            S->Next = NULL;
            MakeEmpty( S );
            return S;
        }

        void
        MakeEmpty( Stack S )
        {
            if( S == NULL )
                Error( "Must use CreateStack first" );
            else
                while( !IsEmpty( S ) )
                    Pop( S );
        }
/* END */

        void
        DisposeStack( Stack S )
        {
            MakeEmpty( S );
            free( S );
        }

/* START: fig3_42.txt */
        void
        Push( ElementType X, Stack S )
        {
            PtrToNode TmpCell;

            TmpCell = malloc( sizeof( struct Node ) );
            if( TmpCell == NULL )
                FatalError( "Out of space!!!" );
            else
            {
                TmpCell->Element = X;
                TmpCell->Next = S->Next;
                S->Next = TmpCell;
            }
        }
/* END */

/* START: fig3_43.txt */
        ElementType
        Top( Stack S )
        {
            if( !IsEmpty( S ) )
                return S->Next->Element;
            Error( "Empty stack" );
            return 0;  /* Return value used to avoid warning */
        }
/* END */

/* START: fig3_44.txt */
        void
        Pop( Stack S )
        {
            PtrToNode FirstCell;

            if( IsEmpty( S ) )
                Error( "Empty stack" );
            else
            {
                FirstCell = S->Next;
                S->Next = S->Next->Next;
                free( FirstCell );
            }
        }
/* END */


double Stack_Calculator(const char* Expression)
{
    Stack number_stack=CreateStack();
        if(Expression[i]>=48 && Expression[i]<=54)
        {
   	        Push((double)Expression[i],number_stack);
        }
        else
        {
            if(Expression[i]=='+')
            {
                double num1=Top(number_stack);
                Pop(number_stack);
                double num2=Top(number_stack);
                Pop(number_stack);
                Push(num1+num2,number_stack);
            }
            if(Expression[i]=='-')
            {
                double num1=Top(number_stack);
                Pop(number_stack);
                double num2=Top(number_stack);
                Pop(number_stack);
                Push(num1-num2,number_stack);
            }
            if(Expression[i]=='*')
            {
                double num1=Top(number_stack);
                Pop(number_stack);
                double num2=Top(number_stack);
                Pop(number_stack);
                Push(num1*num2,number_stack);
            }
            if(Expression[i]=='/')
            {
                double num1=Top(number_stack);
                Pop(number_stack);
                double num2=Top(number_stack);
                Pop(number_stack);
                Push(num1/num2,number_stack);
            }
            if(Expression[i]=='^')
            {
                double num1=Top(number_stack);
                Pop(number_stack);
                double num2=Top(number_stack);
                Pop(number_stack);
                Push(pow(num1,num2),number_stack);
            }
        }
    return Top(number_stack);
}

int main()
{
    printf("%f",Stack_Calculator("1245/+5*-"));
}
