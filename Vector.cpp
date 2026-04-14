#include <iostream>
#include <string>
#include <vector>

int main(){
    std::vector<int> numbers;
    numbers.push_back(10);
    numbers.push_back(20);
    numbers.push_back(30);
    std::cout << "Number of Saved Data : " << numbers.size() << "\n";
    std::cout << "First Data : " << numbers[0] << "\n";

    return 0;
}