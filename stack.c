#include<stdio.h>


int stack[10],top=-1,l,k;
k = sizeof(stack);


int main(){




   for(l=1;l<=5;l++)
    push() ;

    //five elements are inserted in stack1


    for (l=1;l<=4;l++)
     pop();
    
    //  four elements are removed from stack
    

return 0;

}

 push()
{
  if(top==k-1 ){

    printf("Stack is full\n");
  }

  else{
     int a;
    printf("Input the number\n");
    scanf("%d",&a);
     
     top+=1;
     stack[top]=a;
     
  }
}


 pop(){

    if(top==-1){
        printf("Empty stack \n");
    }


    else{

        printf("%d \n",stack[top]);
        top-=1;
        printf("elements in stack  are\n",stack[top]);
}
}
