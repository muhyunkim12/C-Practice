#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> mut_position;
    std::string seq1;
    std::string seq2;
    std::cout << "Please input Seq1 : ";
    std::cin >> seq1;
    std::cout << "Please input Seq2 : ";
    std::cin >> seq2;
    for(int i = 0; i < seq1.length(); i++){
        if(seq1[i] != seq2[i]){
            mut_position.push_back(i);
        }
    }
    std::cout << "Estimated Mutation Position : ";
    for(int i=0; i < mut_position.size(); i++){
        std::cout << mut_position[i];
        if(i != mut_position.size() -1){
            std::cout << ", ";
        }
    }
    std::cout << "\n";
    return 0;
}