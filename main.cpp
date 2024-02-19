#include <iostream>

//Write a function called swap( ) that will swap the contents of two integer variables in the
//calling function. From the calling function, output the values of the two variables before
//and after the call. Do we need call-by-value or call-by-reference in this case? – explain.

void swap(int* x, int* y) {
    int temp = *x;

    *x = *y;
    *y = temp;
}

int main() {
    int x = 0;
    int y = 2;

    std::cout << "Before\nX: " << x << "\nY: " << y << std::endl;
    swap(&x, &y);

    std::cout << "\nAfter\nX: " << x << "\nY: " << y << std::endl;

    return 0;
}
