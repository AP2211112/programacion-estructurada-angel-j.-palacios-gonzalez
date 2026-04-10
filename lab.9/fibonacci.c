//angel palacios gonzalez
//matricula 2211112

#include<stdio.h>
main(){
n=5;
//definicion de la funcion recursiva
long fn(int n){

//1. caso base:definir la recuersion cuando nes 0 o 1
if (n <= 1){
    return 1;
}
//2. paso recuersivo: la funcion se llama a si misma con (n-1)
else{
    return fn=(n-1+fn(n-2));
};
}printf("factrotial es %ld", factorial(n));
}