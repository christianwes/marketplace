#include <stdio.h>

typedef struct {
    char name[50];
    float price;
    int quantity;
    char store;
} Product;

void add_product(Product p) {
    printf(" Price: %.2f, Quantity: %d\n, Store: %s", p.price, p.quantity, p.store);
}

int main() {
    Product p1 = {"Apple", 0.5, 30};
    Product p2 = {"Banana", 0.2, 50};
    Product p3 = {"Orange", 0.3, 80};


    print_product(p1);
    print_product(p2);
    print_product(p3);


    return 0;
}