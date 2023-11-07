#include<stdio.h>
#include<math.h>

int main(){
    int a, b;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    double c = sqrt ( a * a + b * b);

    if ( c == (int)c){
        printf("%d-%d-%d es un triple pitagorico", a, b, (int)c);
    }
    return 0;
}