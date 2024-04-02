#include <stdio.h>
#include <math.h>

float nsqrt(float x) {
    if (x < 0) {
        printf("Erorr: undefined\n");
        return 0;
    }

    float z = 0.5 * x; //initial guess as half of x

    while (fabsf(z * z) - x > 0.00001) { //setting the accuracy to which the function runs
        float p = z * z - x; //the differnce between the approximation square and the number
        printf("p:%f\n", p); //print differnce
        z = 0.5 * (z + x / z); // z approx using newton-raphson method iteration babylonian method;
        printf("z:%f\n", z); //printing the updated guess z
    }
    return z;
}

int main() {
    float x;
    float sqrt;

    printf("Enter a number: "); // Prompt the user to enter a number
    scanf("%f", &x);

    sqrt = nsqrt(x); // calculating sqrt using nsqrt function
    printf("Square root: %f\n", sqrt);

    return 0;
}
