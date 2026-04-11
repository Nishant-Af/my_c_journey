#include <stdio.h>

int main(){
    int a = 36;  // Declearaion and initialization
    float b = 6.34;

    // Arithemetic Operators --> +, -, *, /, (%)--> it's modulus used to get reminder;
    
    printf("Arithemetic Operators --> +, -, *, /, (%)--> it's modulus used to get reminder;\n");
    printf("a + b = %f\n",a + b);
    printf("a - b = %f\n",a - b);
    printf("a * b = %f\n",a * b);
    printf("a / b = %f\n",a / b);
    printf("a % b = %f\n",a % (int)b);


    // Relational Operators --> ==, !=, <, >, <=, >=;
    int x,y;
    x = 33;
    y = 33;

    printf("Relational Operators --> ==, !=, <, >, <=, >=;\n");
    printf("x == y : %d\n",x == y);
    printf("x != y : %d\n",x != y);
    printf("x > y : %d\n",x > y);
    printf("x < y : %d\n",x < y);
    printf("x <= y : %d\n",x <= y);
    printf("x >= y : %d\n",x >= y);

    // Logical Operators --> && --> And operator, || --> ORr Operator, ! --> Not Operator;
    int p,q;
    p = 1;
    q = 1;
    printf("Logical Operators --> && --> And operator, || --> ORr Operator, ! --> Not Operator;\n");
    printf("p && q = %d\n",p && q);
    printf("p || q = %d\n",p || q);
    printf("!q = %d\n",!q);

    // Bitwise operators -> &->and, | -> or, (^)-> its xor operator if inputs are different then it give 1; 
    int m,n;
    m = 1;
    n = 0;
    printf("Bitwise operators -> &->and, | -> or, (^)-> its xor operator if inputs are different then it give 1;\n");
    printf("m & n : %d\n",a & n);
    printf("m | n : %d\n",a | n);
    printf("m ^ n : %d\n",a ^ n);

    // Assignment operators --> = assign, += add then assign, -= substract than assign, *= times then assign, /= divide and then assign;

    int z;
    printf("Assignment operators --> = assign, += add then assign, -= substract than assign, *= times then assign, /= divide and then assign;\n");
    z = 10; // assign the value 10 or initalize the value 
    printf("z += 1 : %d\n",z+=1);  // first add then assign 
    printf("z -= 1 : %d\n",z-=1);  // first substract then assign 
    printf("z *= 1 : %d\n",z*=2);   // first multiply then assig 
    printf("z /= 1 : %d\n",z/=3);   // first divide then assign



    return 0;

}