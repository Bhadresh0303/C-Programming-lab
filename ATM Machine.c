#include<stdio.h>

int main(){
    int choice;
    float balance = 1000.00, amount;


    while(1){
        printf("\n====ATM MENU =====\n");
        printf("1. View Balance \n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
         printf(" Enter your Choice :");
         scanf("%d",&choice);

         switch (choice){
             case 1:
                  printf("your balance :$%.2f\n",balance);
                  break;
             case 2:
                 printf("Enter amount to withdraw:");
                 scanf("%f",&amount );
                 if(amount <=balance ){
                 balance -=amount;
                 printf("Withdraw successfully!\n");

             }
             break;

              case 3:
                printf("Enter amount to withdraw: ");
                scanf("%f", &amount);
                if (amount <= balance) {
                    balance -= amount;
                    printf("Withdrawal successful! New balance: $%.2f\n", balance);
                }
             else {
                 printf("Insufficient Balance !\n");

             }
              break ;

         case 4:
             printf("Thank you! Visit again.\n");
         return 0;

         default:
         printf("Invalid choice !\n ");






    }

}
return 0;
}
