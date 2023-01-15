#include <stdio.h>

struct teeradet {
    int age;
    int height;
    int weight;
};

int main() {
    struct teeradet body;
    body.age = 20;
    body.height = 174;
    body.weight = 62;
    printf("Teeradet age : %d year\n", body.age );
    printf("Teeradet height : %d cm\n", body.height );
    printf("Teeradet weight : %d kg\n", body.weight );
    return 0;
}