#include <stdio.h>

int main() {
    int a=10;

    while(a<20) {
        if(a==15) {
            a=a+1;
            continue;
        }
            printf("Value of a: %d\n",a);
            a++;
        }
    
return 0;
}