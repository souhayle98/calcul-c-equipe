#include <stdio.h>
int produit(int a, int b) {
    return a * b;
}
float moyenne(int a,int b){
    return (float)(a+b)/2;
}
int main(){
    printf("Projet collaboratif - version corrigee\n");
    printf("Produit : %d\n", produit(3, 4));
    printf("Moyenne : %f\n", moyenne(6,4));
    return 0;
}
