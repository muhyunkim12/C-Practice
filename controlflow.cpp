#include <iostream>

int main() {
    int read_lenght = 120;
    if (read_lenght >= 150) {
        std::cout << "This read is long read.\n";
    }
    else if (read_lenght >= 50) {
        std::cout << "This is short read.\n";
    }
    else {
        std::cout << "This read is way too short (Filter out).\n";
    }

    return 0;
}