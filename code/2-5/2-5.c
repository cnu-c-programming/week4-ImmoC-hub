#include <stdio.h>
#include <math.h>

int main() {
    double x = 9.0;
    double y = 2.5;

    printf("%.2f\n",sqrt(x)); // 제곱근
    printf("%.2f\n",pow(x,y)); //거듭제곱
    printf("%.1f\n",ceil(y)); //올림
    printf("%.1f\n",floor(y)); //내림

    return 0;
}