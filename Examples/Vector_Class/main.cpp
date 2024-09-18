#include <iostream>
#include <vector>
#include <stdexcept>
// #include <numeric>

class Vector {
    private:
        std::vector<double> data;

    public:
        // Construtor vazio
        // Isso aloca espaço para um Vector de tamanho size
        Vector(int size): data(size) {}
        
        // Construtor a partir de um vector
        Vector(const std::vector<double>& values): data(values) {}

        void push(double value) {
            data.push_back(value);
        }

        double operator*(const Vector& other) const {
            double result = 0.;
            for(int i = 0; i < data.size(); ++i) {
                result += data[i] * other.data[i];
            }
            return result;

           // return std::inner_product(data.begin(), data.end(), 
           //         other.data.begin(), 0.);
        }

        // Overload do operador <<
        friend std::ostream& operator<<(std::ostream& os, const Vector& obj) {
            os << "[ ";
            for(auto e: obj.data) {
                os << e << " ";
            }
            os << "]";
            return os;
        }
};

int main() {
    Vector X({1., 2., 3.});
    Vector Y({1., 1., 1.});
    std::cout << "X = " << X << std::endl;
    std::cout << "Y = " << Y << std::endl;
    std::cout << "X dot Y = " << X * Y << std::endl;

    return 0;
}
