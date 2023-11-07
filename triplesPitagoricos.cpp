#include<stdio.h>
#include<math.h>

int main(){
    int a, b, c;

    printf("Ingrese el valor de a: ");
    scanf("%d", &a);

    printf("Ingrese el valor de b: ");
    scanf("%d", &b);

    c = sqrt (pow (a,2) + pow(b,2));

    if ( c * c == a * a + b * b ){
        printf("%d-%d-%d es un triple pitagorico", a, b, c);
    }
    return 0;
}