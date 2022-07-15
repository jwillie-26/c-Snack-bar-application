#include <stdio.h>



int menu(){
    int item;
    int quantity;
    float paid;
    printf("Welcome to Zetech C snack shop! \n");
    printf("\tToday's Menu\n");
    printf("1.Hamburger KES 300\n");
    printf("2.Hotdog KES 90\n");
    printf("3.french fries KES 150\n");
    printf("4.milkshake KES 150\n");
    printf("5.coffee KES 70\n");
    printf("6.beef smokies KES 40\n");
    printf("Enter item no.: ");
    scanf("%d",&item);
    printf("enter item quantity: ");
    scanf("%d",&quantity);
 switch (item)
 {
 case 1:
    printf(" ======  Item added to cart  ========= \n");
    int total = 50 * quantity;
    printf("Sub total: %d \n",total);
    printf("VAT at 16 percent: %lf \n", total * 0.16);
    printf("Total amount: %lf \n", total +  total * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total + total * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
 case 2:
    printf(" ======  Item added to cart  ========= \n");
    int total1 = 90 * quantity;
    printf("Sub total: %d \n", total1);
    printf("VAT at 16 percent: %lf \n", total1 * 0.16);
    printf("Total amount: %lf \n", total1 +  total1 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total1 + total1 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
 case 3:
    printf(" ======  Item added to cart  ========= \n");
    int total2 = 100 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %lf \n", total2 * 0.16);
    printf("Total amount: %lf \n", total2 +  total2 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total2 + total2 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
 case 4:
    printf(" ======  Item added to cart  ========= \n");
    int total3 = 150 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %lf \n", total3 * 0.16);
    printf("Total amount: %lf \n", total2 +  total2 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total2 + total2 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
  case 5:
    printf(" ======  Item added to cart  ========= \n");
    int total4 = 100 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %lf \n", total4 * 0.16);
    printf("Total amount: %lf \n", total2 +  total2 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total2 + total2 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
  case 6:
    printf(" ======  Item added to cart  ========= \n");
    int total5 = 70 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %lf \n", total5 * 0.16);
    printf("Total amount: %lf \n", total2 +  total2 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total2 + total2 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;
  case 7:
    printf(" ======  Item added to cart  ========= \n");
    int total6 = 40 * quantity;
    printf("Sub total: %d\n", total2);
    printf("VAT at 16 percent: %lf \n", total6 * 0.16);
    printf("Total amount: %lf \n", total2 +  total2 * 0.16);
    printf("Enter amount tendered for payment: ");
    scanf("%d",&paid);
    printf("change is: %f",paid - total2 + total2 * 0.16 );
    printf("THANK TOU AND COME AGAIN");
    break;

 default:printf("INVALID CHOICE"); menu();
    break;
 }


    return item;

}
int main(){
 menu();
};


