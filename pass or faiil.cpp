#include <stdio.h>

int main() {
    int n;
    printf("Enter your marks: ");
    scanf("%d", &n);
    printf("%s", (n >= 50) ? "Pass" : "Fail");

    return 0;
}
