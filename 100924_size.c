#include <stdint.h>
#include <stdio.h>

void print_as_bin(char c) {
    for(int place = 128; place > 0; place /= 2) {
        if((c & place) == 0) printf("0");
        else printf("1");
    }
}


int main() {   
    printf("sizeof(char): %ld\n", sizeof(char));            // 1

    printf("sizeof(int8_t): %ld\n", sizeof(int8_t));        // 1
    printf("sizeof(uint8_t): %ld\n", sizeof(uint8_t));      // 1

    printf("sizeof(int16_t): %ld\n", sizeof(int16_t));      // 2
    printf("sizeof(uint16_t): %ld\n", sizeof(uint16_t));    // 2

    printf("sizeof(int32_t): %ld\n", sizeof(int32_t));      // 4

    printf("sizeof(int64_t): %ld\n", sizeof(int64_t));      // 8

    printf("sizeof(int): %ld\n", sizeof(int));

    char c = 128;
    int32_t i = 32;
    char c2 = c + 1;

    printf("sizeof(c): %ld\n", sizeof(c));                // 1
    printf("sizeof(i): %ld\n", sizeof(i));                // 4
    printf("sizeof(c * 4000): %ld\n", sizeof(c * 4000));  // 4
    printf("sizeof(c + 1): %ld\n", sizeof(c + 1));        // 4
    printf("sizeof(c2): %ld\n", sizeof(c2));              // 1

    char arr[] = "hello!";                                 
    printf("sizeof(arr): %ld\n", sizeof(arr));            // 9

    unsigned char toobig = 200 + 57;                    
    printf("sizeof(toobig): %ld\n", sizeof(arr));         //gives a warning

    char s = 200;
    unsigned char u = 200;

    printf("s: ");
    print_as_bin(s);
    printf("\t\tu: ");
    print_as_bin(u);
    printf("\n");

    printf("s as hhx: %hhx\t\tu as hhx: %hhx\n", s, u);
    printf("s as x: %x\tu as x: %x\n", s, u);

    printf("s < 127: %d u < 127: %d\n", s > 127, u > 127);

}
