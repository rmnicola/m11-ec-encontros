#include <iostream>
#include <vector>
#include <stdexcept>
// #include <numeric>

class Tensor {
    private:
        std::vector<double> data;
        std::vector<int> shape;

    public:
        Tensor(const std::vector<int>& dimensions): shape(dimensions) {
            int total_size = 1;
            for(int dim: shape) {
                total_size *= dim;
            }
            data.resize(total_size);
        }

        int index(const std::vector<int>& indices) const {
            int flat_idx = 0, stride = 1;
            for(int i = shape.size() - 1; i >= 0; --i) {
                flat_idx += indices[i] * stride;
                stride *= shape[i];
            }
            return flat_idx;
        }

        double& operator[](const std::vector<int>& indices) {
            return data[index(indices)];
            
        }

        friend std::ostream& operator<<(std::ostream& os, const Tensor& obj) {
            for(auto e: obj.data) {
                os << e << " ";
            }
            return os;
        }

        Tensor operator*(const Tensor& other) const {
            if (shape.size() != 2 || other.shape.size() != 2) {
                throw std::invalid_argument("matmul requires two 2D tensors (matrices)");
            }
            int m = shape[0];
            int n = shape[1];
            int n_other = other.shape[0];
            int p = other.shape[1];

            if (n != n_other) {
                throw std::invalid_argument("Inner dimensions must match for matmul");
            }

            // Resultant tensor of shape [m, p]
            Tensor result({m, p});

            for (int i = 0; i < m; ++i) {
                for (int j = 0; j < p; ++j) {
                    double sum = 0.0;
                    for (int k = 0; k < n; ++k) {
                        std::vector<int> idx_this = {i, k};
                        std::vector<int> idx_other = {k, j};
                        sum += (*this)[idx_this] * other[idx_other];
                    }
                    std::vector<int> idx_result = {i, j};
                    result[idx_result] = sum;
                }
            }
            return result;
        }
};


int main() {
    Tensor a({2, 2});
    Tensor b({2, 2});

    std::cout << a << std::endl;

    return 0;
}
