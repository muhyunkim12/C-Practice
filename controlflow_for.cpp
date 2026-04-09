#include <iostream>
#include <string>

int main () {
    std::string sequence = "ATGC";
    for (int i = 0; i < 4; i++) {
        std::cout << i << "base: " << sequence[i] << "\n";
    }

    return 0;
}