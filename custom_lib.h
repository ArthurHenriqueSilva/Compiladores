#ifndef LIB_H
#define LIB_B


int fatorial(int n) {
    int out = 1;
    for(int i = n; i > 1; i--) out = out * i;
    return out;
}

int fibonacci(int n){
    int out = 0;
    for (int i = 1; i <= n; i++ ) out = out + i;
    return out;
}

#endif