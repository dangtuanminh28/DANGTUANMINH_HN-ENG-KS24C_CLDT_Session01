#include <stdio.h>

void printfDouble(int n) {
    int i=1;
    //Do phuc tap thuat toan la O(log n)
    while(i<=n){
        printf("%d\n",i);
        i=i*2;
    }
}
int main() {
    printfDouble(5);
    return 0;
}