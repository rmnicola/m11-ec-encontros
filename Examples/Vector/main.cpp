#include <iostream>
#include <vector>

int main() {
    std::vector<double> X = {1., 2., 3., 4., 5., 6.};

    std::cout << "X = ";
    for (int i = 0; i < X.size(); ++i) {
        std::cout << X[i] << " ";
    }
    std::cout << "\n";

    return 0;
}
