#include <stdio.h>
int produit(int a, int b) {
    return a * b;
}
float moyenne(int a,int b){
    return (float)(a+b)/2;
}
int main(){
    printf("modification main\n");
    printf("Produit : %d\n", produit(3, 4));
    print("Moyenne : %d\n", moyenne(6,4));
    return 0;
}
