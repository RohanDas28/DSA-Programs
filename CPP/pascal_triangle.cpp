#include <iostream>

int factorial(int n){
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}

int * pascal_triangle(int index){
    int * triangle = new int[index+1];
    triangle[0] = 1;
    triangle[index] = 1;

    if(index <= 1) return triangle;

    int index_factorial = factorial(index); // n!
    int i_factorial = 1; // r!
    int third_term = index_factorial / index; // (n-r)!

    for (int i = 1; i < index; i++){
        i_factorial *= i;
        triangle[i] = index_factorial / (i_factorial * third_term);
        third_term /= (index - i);
    }
    
    return triangle;
}

void print_arr(int* param,int Arrsize){
    // This will print array like python style
    printf("[");
    for (int i = 0; i < Arrsize-1; i++)
        printf("%d, ",param[i]);
    printf("%d]\n",param[Arrsize-1]);
}
int main(){
    for (int leng = 0; leng < 8; leng++){
        int * r = pascal_triangle(leng);
        printf("Pascal Triangle of %d Length: ",leng);
        print_arr(r,leng+1);
    }
    return 0;
}
