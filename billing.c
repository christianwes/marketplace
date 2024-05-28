#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
    float discount; // Discount percentage
    float tax;      // Tax percentage
} Product;

float calculate_total_price(Product p) {
    // Calculate discount amount
    float discount_amount = (p.price * p.quantity) * (p.discount / 100.0);
    // Calculate tax amount
    float tax_amount = ((p.price * p.quantity) - discount_amount) * (p.tax / 100.0);
    // Calculate total price
    float total_price = (p.price * p.quantity) - discount_amount + tax_amount;
    return total_price;
}

void add_product(Product products[], int *count, char *name, float price, int quantity) {
    Product new_product;
    strcpy(new_product.name, name);
    new_product.price = price;
    new_product.quantity = quantity;
    products[(*count)++] = new_product;
}

void list_products(Product products[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Product: %s, Total Price: %.2f\n", products[i].name, calculate_total_price(products[i]));
    }
}
