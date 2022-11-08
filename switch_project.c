#include<stdio.h>

int main(){
   int choice;
   int money = 0;
   int withdraw , deposit , sub ,add;
  
  do{
   printf("****************\n");
   printf("Banking System \n\n1.Withdraw \n2.Deposit \n3.Check balance \n4.Quit \n");
   printf("__________________________________________\n");
   printf("Enter the choice : \n");
   scanf("%d",&choice);
    
    
   switch(choice){
       case 1 : printf("Enter amount to withdraw : \n");
                scanf("%d",&sub);
                if(money == 0 ){
                    printf("Sorry , you dont have enough money");
                }
                else{
                    money = money-sub;
                    printf("money withdrawn \n");
                    printf("Thank You \n");
                }
                break;
        
       case 2 : printf("Enter amount to deposit : \n");
                scanf("%d",&add);
                money = money + add;
                printf("Amount deposited successfully \n");
                printf("Thank You");
                break; 
                
       case 3 : printf("Current Amount %d \n" , money);
                printf("Thank You");
                break;
        
        case 4 : printf("Thank You , Exiting \n");
                 break;
                 
       default : printf("Enter valid choice");
   }
}while(choice != 4);
    return 0;
}
