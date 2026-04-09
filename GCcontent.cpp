#include <iostream>
#include <string>

int main () {
    std::string dna = "AGCTATCG";
    int gc_count = 0;
    for (int i=0; i<8; i++) {
        if (dna[i] == 'G' || dna[i] == 'C') {
            gc_count++;
        }
    }
    std::cout << "GC count is " << gc_count << "\n";
    

    return 0;
}