
#include <stdio.h>
#include <limits.h>
#include <stdlib.h>

struct Book{
    char name[100], author[100];
    int price, qty, ISBN;   
};

void read(struct Book *b, int n){
    for(int i = 0; i < n; i++){
        scanf("%d %s %s %d %d", &b[i].ISBN, &b[i].name, &b[i].author, &b[i].price, &b[i].qty);
    }
}
void print(struct Book *b, int n){
    printf("Book Stock Available:\n");
    for(int i = 0; i < n; i++){
        printf("ISBN: %d\n", b[i].ISBN);
        printf("Name: %s\n", b[i].name);
        printf("Author: %s\n", b[i].author);
        printf("Price: %d\n", b[i].price);
        printf("Qty: %d\n", b[i].qty);
    }
}

void highPrice(struct Book *b, int n){
    int idx = -1, max = 0;
    for(int i = 0; i < n; i++){
        if(b[i].price > max){
            max = b[i].price;
            idx = i;
        }
    }
    printf("Book with the highest price: %s\n", b[idx].name);
}

void minqty(struct Book *b, int n){
    int idx = -1, min = INT_MAX;
    for(int i = 0; i < n; i++){
        if(b[i].qty < min){
            min = b[i].qty;
            idx = i;
        }
    }
    printf("This Book needs to be stocked up!\n");
    printf("ISBN: %d\n", b[idx].ISBN);
    printf("Name: %s\n", b[idx].name);
    printf("Author: %s\n", b[idx].author);
    printf("Price: %d\n", b[idx].price);
    printf("Qty: %d\n", b[idx].qty);

}
void findBook(int isbn, struct Book *b, int n){
    int idx;
    for(int i = 0; i < n; i++){
        if (isbn == b[i].ISBN){
            idx = i;
            break;
        }
    }
    printf("ISBN: %d\n", b[idx].ISBN);
    printf("Name: %s\n", b[idx].name);
    printf("Author: %s\n", b[idx].author);
    printf("Price: %d\n", b[idx].price);
    printf("Qty: %d\n", b[idx].qty);
}

int main(){
    int n, isbn;
    scanf("%d",&n);
    struct Book *b = (struct Book *)malloc(n * sizeof(struct Book));

    //Inputs
    read(b, n);
    scanf("%d",&isbn);

    //Outputs
    print(b, n);
    highPrice(b, n);
    findBook(isbn, b, n);
    minqty(b, n);

    free(b);
}
