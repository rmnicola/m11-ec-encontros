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

        double& operator[](int index) {
            return data[index];
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

class Matrix {
    private:
        std::vector<Vector> rows;

    public:
        Matrix(int row_count, int col_count): 
            rows(row_count, Vector(col_count)) {}

        Matrix(const std::vector<std::vector<double>>& values) {
            for (const auto& row: values) {
                rows.emplace_back(row);
            }
        }

        Vector& operator[](int index) {
            return rows[index];
        }

        friend std::ostream& operator<<(std::ostream& os, const Matrix& obj) {
            os << "[ ";
            for(auto e: obj.rows) {
                os << e << " ";
            }
            os << "]" << "\n";
            return os;
        }

        Vector operator*(const Vector& other) const {
            Vector result(rows.size());
            for(int i = 0; i < rows.size(); ++i) {
                result[i] = rows[i] * other;
            }
            return result;
        }
};

int main() {
    Matrix M({
            {1., 1., 1.},
            {2., 2., 2.},
            {3., 3., 3.}
            });

    Vector Y({1., 1., 1.});
    std::cout << "Y = " << Y << std::endl;
    std::cout << "M = " << M << std::endl;
    std::cout << "M dot Y = " << M * Y << std::endl;

    return 0;
}
