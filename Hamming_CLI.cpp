#include <iostream>
#include <string>

int main(){
    std::string seq1;
    std::string seq2;
    std::cout << "Please insert first seq : ";
    std::cin >> seq1;
    std::cout << "Please insert second seq : ";
    std::cin >> seq2;
    if(seq1.length() != seq2.length()) {
            std::cout << "Length of Sequences are Diff!\n";
            return 0;
        }
    int mutation_count =0;
    for(int i =0; i < seq1.length(); i++){
        if(seq1[i] != seq2[i]) {
            mutation_count++;
        }
    }
    std::cout << "Hamming Distant is " << mutation_count << "\n";
    return 0;
}