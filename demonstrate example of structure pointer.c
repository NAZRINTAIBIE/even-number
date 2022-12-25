#include <stdio.h>
 
struct item
{
    char itemName[30];
    int qty;
    float price;
    float amount;
};
 
int main()
{
 
    struct item itm;
    struct item *pItem;
 
    pItem = &itm;
 
    
    printf("Enter product name: ");
    gets(pItem->itemName);
    printf("Enter price:");
    scanf("%f",&pItem->price);
    printf("Enter quantity: ");
    scanf("%d",&pItem->qty);
 
    
    pItem->amount =(float)pItem->qty * pItem->price;
 
    
    printf("\nProduct Name: %s",pItem->itemName);
    printf("\nProduct Price: %f",pItem->price);
    printf("\nProduct Quantity: %d",pItem->qty);
    printf("\nTotal Amount: %f",pItem->amount);
 
    return 0;
}

