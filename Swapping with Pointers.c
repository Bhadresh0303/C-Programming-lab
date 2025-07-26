#include<stdio.h>

//function for call by value
  void swapValue(int a,int b){
    int temp;
    temp =a;
    a=b;
    b=temp;
    printf("inside swapValue a :%d, b:d\n",a,b);

}
//Function for call reference
void swapRef(int*a,int*b){
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;

    //swap actual variabbles using pointers

}

int main()
{
    int x,y;
    printf("Enter two numbers :");
    scanf("%d %d" ,&x,&y);
    printf("\n-----------Before swap -----------\n");
    printf("x:%d,y:%d\n",x,y);
    swapValue(x,y);
    printf("After swapValue (call by value):x:%d,y:%d\n",x,y);
    swapRef(&x,&y);
    printf("After swapref (call-by-reference):x:%d,y:%d\n"
    ,x,y);
    return 0;
    }
