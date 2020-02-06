#include <stdio.h>

void update(int *a,int *b) {
    int c = *a;
    *a = c + *b;
    *b = c - *b;
    if(*b < 0){
        *b = *b * (-1);
    }    
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

