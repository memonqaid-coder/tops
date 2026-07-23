#include <stdio.h>

struct FoodItem{
    char itemName[50];
    float price;
    float rating;
};

int main(){
    struct FoodItem menu[3]={
        {"Butter Chicken", 380.00, 4.6},
        {"Paneer Tikka", 260.00, 4.4},
        {"Garlic Naan", 60.00, 4.8}
    };
    printf(" ZOMATO RESTAURANT MENU \n");
    printf("-----------------------------------------\n\n");
    for (int i = 0; i < 3; i++){
        printf("Item %d: %-18s | Price: ₹%.2f | Rating: %.1f\n", 
               i + 1, 
               menu[i].itemName, 
               menu[i].price, 
               menu[i].rating);
    }
    printf("-----------------------------------\n");
    return 0;
}