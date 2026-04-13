//angel palacios gonzalez
//matricula 2211112

#include<stdio.h>

long fibonacci(int n);

main(){
 int n=5;
//definicion de la funcion recursiva
long int fibonacci(int n); {

    int n=5, fn=0;

//1. caso base:definir la recuersion cuando nes 0 o 1
if (n <= 1){
    return 1;
}
//2. paso recuersivo: la funcion se llama a si misma con (n-1)
else{
    return fn=(n-1+fibonacci(n-2));
}
}
}