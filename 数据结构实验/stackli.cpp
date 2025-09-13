#include "stackli.h"
#include "fatal.h"
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include <cstring>
#include <stack>
#include <algorithm>
#include <string>

struct Node;
typedef struct Node *PtrToNode;
typedef PtrToNode Stack;

typedef double ElementType;
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
            Stack S =(Stack)malloc( sizeof( struct Node ) );;

            
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
            PtrToNode TmpCell=(PtrToNode) malloc( sizeof( struct Node ) );
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

int precedence(char op) {
    switch (op) {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
        default:
            return 0;
    }
}

char* Infix_to_Postfix(const char* Expression) {
    int length = strlen(Expression);
    std::stack<char> s;
    char* ans = new char[length * 2 + 1];  
    int ans_index = 0;

    for (int i = 0; i < length; i++) 
	{
        if (Expression[i]>=48 && Expression[i]<=54)
		{
                ans[ans_index++] = Expression[i];
        } 
		else if (Expression[i] == '(') 
		{
            s.push(Expression[i]);
        }
		else if (Expression[i] == ')') 
		{
            while (!s.empty() && s.top() != '(') 
			{
                ans[ans_index++] = s.top();
                s.pop();
            }
            s.pop();  
        } 
		else 
		{
            while (!s.empty() && precedence(s.top()) >= precedence(Expression[i])) 
			{
                ans[ans_index++] = s.top();
                s.pop();
            }
            s.push(Expression[i]);
        }
    }

    while (!s.empty()) 
	{
        ans[ans_index++] = s.top();
        s.pop();
    }

    return ans;
}


double Stack_Calculator(const char* Expression)
{
    Stack number_stack=CreateStack();
    int i; 
    for(i=0;i<(int)strlen(Expression);i++)
    {
        if(Expression[i]>=48 && Expression[i]<=54)
        {
            Push((double)(Expression[i]-'0'),number_stack);
        }
        else
        {
            if(Expression[i]=='+')
            {
                double num2=Top(number_stack);
                Pop(number_stack);
                double num1=Top(number_stack);
                Pop(number_stack);
                Push(num1+num2,number_stack);
            }
            if(Expression[i]=='-')
            {
                double num2=Top(number_stack);
                Pop(number_stack);
                double num1=Top(number_stack);
                Pop(number_stack);
                Push(num1-num2,number_stack);
            }
            if(Expression[i]=='*')
            {
                double num2=Top(number_stack);
                Pop(number_stack);
                double num1=Top(number_stack);
                Pop(number_stack);
                Push(num1*num2,number_stack);
            }
            if(Expression[i]=='/')
            {
                double num2=Top(number_stack);
                Pop(number_stack);
                double num1=Top(number_stack);
                Pop(number_stack);
                Push(num1/num2,number_stack);
            }
            if(Expression[i]=='^')
            {
                double num2=Top(number_stack);
                Pop(number_stack);
                double num1=Top(number_stack);
                Pop(number_stack);
                Push(pow(num1,num2),number_stack);
            }
        }
    }
    return Top(number_stack);
}

int main()
{
   char*b=Infix_to_Postfix("(1+2)*3");
   printf(b);
   double ans=Stack_Calculator(b);
   printf("%lf",ans);
}


