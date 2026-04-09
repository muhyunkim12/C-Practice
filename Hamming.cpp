#include <iostream>
#include <string>

int main(){
    std::string seq1 = "ATGCTACGAT";
    std::string seq2 = "ATCCTACAAT";
    int mutation_count = 0;
    for (int i=0; i <= 9; i++) {
        if (seq1[i] != seq2[i]) {
            mutation_count++;
        }
    }
    std::cout << "Hamming Distant is " << mutation_count << "\n";

    return 0;
}