#include <stdio.h>
#include <stdlib.h>


//Global Variable
int size,ele,i,choice;
//char choice[1];


//Creating Stack
struct stack{
    int arr[100];
    int top;

}st;

//Inserting Element
void push(int element)
{
    if((st.top)==size)
    {
        printf("\n Stack is Full");
    }
    else
    {
        st.top--;
        printf("\nEnter a Value ");
        scanf("%d",&ele);
        st.arr[st.top]=ele;
    }
}//done

//Removing Element
int pop()
{
    if((st.top)==-1)
    {
        printf("\nStack is Empty");
    }
    else
    {
        int out;
        out=st.arr[st.top];
        st.top++;
        return out;
    }
}//done

//Peek
int peek()
{
    int display;
    display=st.arr[st.top];
    return display;
}

//Display Stack
void display()
{
    if((st.top)>=0)
    {
        printf("\n\nElements in the Stack");
        for(i=st.top;i>=0;i--)
        {
           printf("\n%d",st.arr[i]);
        }
    }
    else
    {
        printf("No elements to Display");
    }
}

int main()
{
    char ch[1];
    st.top=-1;
    printf("Enter a Stack size less than 100 : ");
    scanf("%d",&size);
    printf("\nStack Operations.....");
    printf("\n\t 1.PUSH\n\t 2.POP\n\t 3.PEEK\n\t 4.DISPLAY\n\t 5.EXIT");
    
    

        printf("\nEnter Your Choice  ");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            {
                printf("\nEnter Number You Want To Insert  ");
                scanf("%d",&ele);
                push(ele);
                break;
            }
        case 2:
            {
                printf("%d",pop());
                break;
            }
        case 3:
            {
                printf("%d",peek());
                break;
            }
        case 4:
            {
                display();
                break;
            }
        case 5:
            {
                printf("\n\t EXIT Point");
                break;
            }
        default:
            printf("\nDo you want to try again ?(Y/N)");
            scanf(" %c",&ch);
            printf("\nEnter a correct choice (1,2,3,4,5)");
        }
 
    
    
    return 0;
}
