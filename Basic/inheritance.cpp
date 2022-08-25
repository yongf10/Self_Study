#include <iostream>
class vehicle {
    public:
        void start() {
            std::cout << "vehicle start! " << std::endl;
        }
    protected:
        void protection_start() {
            std::cout << "vehicle start with protection " << std::endl;
        }
};

class car: public vehicle {
    public:
        void car_start() {
            std::cout << "car start! " << std::endl;
        }
        void start() {
            std::cout << "car overload start! " << std::endl;
        }
};

int main() {
    car test_car;
    test_car.start();
    return 0;
}