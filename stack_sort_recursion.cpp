#include<iostream.h>
#include <stdio.h>
#include <stdlib.h>
 using namespace std;

struct stack
{
    int data;
    struct stack *next;
};
 

void initStack(struct stack **s)
{
    *s = NULL;
}
 

int isEmpty(struct stack *s)
{
    if (s == NULL)
        return 1;
    return 0;
}
 

void push(struct stack **s, int x)
{
    struct stack *p = (struct stack *)malloc(sizeof(*p));
 
    p->data = x;
    p->next = *s;
    *s = p;
}
 

int pop(struct stack **s)
{
    int x;
    struct stack *temp;
 
    x = (*s)->data;
    temp = *s;
    (*s) = (*s)->next;
    free(temp);
 
    return x;
}
 

int top(struct stack *s)
{
    return (s->data);
}
 

void sortedInsert(struct stack **s, int x)
{
   
   

    int temp = pop(s);
    sortedInsert(s, x);
 
    // Put back the top item removed earlier
    push(s, temp);
}
 

void sortStack(struct stack **s)
{

    if (!isEmpty(*s))
    {

        int x = pop(s);
 
        // Sort remaining stack
        sortStack(s);
 
        // Push the top item back in sorted stack
        sortedInsert(s, x);
    }
}

void printStack(struct stack *s)
{
    while (s)
    {
        printf("%d ", s->data);
        s = s->next;
    }
    printf("\n");
}
 
// Driver Program
int main(void)
{
    struct stack *top;
 
   
}
