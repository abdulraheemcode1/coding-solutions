#include <stdio.h>

int main()
{
    // 1. Declare two integers and two floats
    int a, b;
    float c, d;
    
    // 2. Read the inputs (Notice: NO printf prompts before scanf!)
    scanf("%d %d", &a, &b);
    scanf("%f %f", &c, &d);
     
    // 3. Print integer results: separated by a space
    printf("%d %d\n", a + b, a - b);
    
    // 4. Print float results: separated by a space, rounded to 1 decimal place (.1f)
    printf("%.1f %.1f\n", c + d, c - d);
     
    return 0;
}
