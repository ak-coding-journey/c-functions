#include <stdio.h>

// Define a struct
struct Rectangle {
    int length;
    int width;
};

// Function that takes a struct as parameter
int area(struct Rectangle r) {
    return r.length * r.width;
}

int main() {
    struct Rectangle rect1;

    // Assign values
    rect1.length = 10;
    rect1.width = 5;

    // Call function
    printf("Length: %d\n", rect1.length);
    printf("Width: %d\n", rect1.width);
    printf("the area of rectangle is: %d\n", area(rect1));

    return 0;
}
