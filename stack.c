#include<stdio.h>
#include<stdlib.h>
#define CAPACITY 5

int stack[CAPACITY], top=-1;
int pop(void);           /****  return type is integer but not taking any argument *********/
void traverse(void);     /****  return type is void and not taking any argument *********/
void peek(void);         /****  no return type and not taking any argument *********/
int IsFull(void);        /****  return type is integer but not taking any argument *********/
int IsEmpty(void);       /****  return type is integer but not taking any argument *********/
void push(int);          /****  no return type but taking argument integer *********/

void main(){
    int ch, item;
    while(1){
	printf("1. PUSH\n");
	printf("2. POP\n");
	printf("3. TRAVERSE\n");
	printf("4. PEEK\n")
	printf("5. Quit\n");

    printf("Enter your choice: \n");
	scanf("%d", &ch);

	switch(ch){
	    case 1 : printf("Enter the item in Stack: \n");
                 scanf("%d", &item);
                 push(item);
                 break;
	    case 2 :item = pop();
                if (item == 0){
                printf("Stack is underflow \n");}
                else{
                printf("Poped item is: %d\n", item);
                }
                break;
	    case 3 : traverse();
                 break;
	    case 4 : peek();
	    case 5 : exit(0);
                break;

	    default:printf("their is no such case\n");
                break;
	}
  }
}

int IsFull(){                  /**** to check whether stack is overflow_error    *********/
if(top == CAPACITY-1){
    return 1;
    }else{
    return 0;
    }
}

int IsEmpty(){                 /****  to check whether stack is underflow_error  *********/
if(top==-1){
        return 1;
    }else{
        return 0;
    }
}

void push(int ele){           /****  to push the elements in stack *********/
 if (IsFull()){
    printf("stack is over-flow \n");
     }
     else{
        top++;
        stack[top] = ele;
        printf("%d pushed \n", ele);
     }
}

int pop(){                  /****  to delete items from stack  *********/
if(IsEmpty()){
        return 0;
	    }else{
	        return stack[top--];
	    }
}

void traverse(){             /****  to print all the element in stack  *********/
if(IsEmpty()){
        printf("stack is empty");
    }else{
    int i;
    printf("Elements in stack are: \n");
    for (i=0; i<=top; i++){
        printf("%d\n", stack[i]);
        }
    }
}

void peek(){
if (IsEmpty()){
    printf("Stack is empty");
    }else{
    return stack[top];
    }
}

