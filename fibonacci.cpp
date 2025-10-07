#include <iostream>
using namespace std;

long long fibonacci(unsigned n);
long long fibonacciRec(unsigned n);

int main()
{
    int n;
    do{
    cout<<"DIgite um numero para a sequenca de Fibonacci:"<<endl;
    cin>>n;
    }while(n < 0);
    
    cout<< "Função Linear: "<< fibonacci(n)<<endl;
    cout<< "Função Recursiva: "<< fibonacciRec(n)<<endl;


    return 0;
}

long long fibonacci(unsigned n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    long long a = 0, b = 1, c = 0;
    for(unsigned i=2; i <= n; i++){
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}
long long fibonacciRec(unsigned n){
    if (n == 0) return 0;
    if (n == 1) return 1;
    
    return fibonacciRec(n-1)+fibonacciRec(n-2);
}