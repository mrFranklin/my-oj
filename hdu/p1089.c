# include <stdio.h>
// using namespace std;

int main() {
    int a, b;
    // printf("hello world\n");
    while (scanf("%d %d", &a, &b) != EOF) {
        printf("%d\n", a+b);
    }
    return 0;
}