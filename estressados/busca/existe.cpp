#include <iostream>
#include <vector>

std::vector<int> impares(std::vector<int> vet) {
    std::vector<int> impares;
    for (int x : vet) {
        if (x % 2 == 1) {
            impares.push_back(x);
        }
    }
    return impares;
}

int main() {
    std::vector<int> result = impares({1, 2, 3, 4, 5, 6, 7, 8, 9, 10});
    for (int x : result) {
        std::cout << x << " ";
    }
    std::cout << "\n";
}
