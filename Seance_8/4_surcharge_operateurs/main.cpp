#include <iostream>
#include "Vector2D.hpp"

int main() {
    Vector2D v1(1.0, 2.0);
    Vector2D v2(3.0, 4.0);

    Vector2D sum = v1 + v2;
    Vector2D diff = v1 - v2;
    Vector2D scaled = v1 * 2.5;

    std::cout << "v1 : ";
    v1.print();

    std::cout << "v2 : ";
    v2.print();

    std::cout << "v1 + v2 : ";
    sum.print();

    std::cout << "v1 - v2 : ";
    diff.print();

    std::cout << "v1 * 2.5 : ";
    scaled.print();

    if (v1 == v2) {
        std::cout << "v1 est egale a v2" << std::endl;
    }
    else if (v1 < v2) {
        std::cout << "v1 est moins long que v2" << std::endl;
    } else {
        std::cout << "v1 est plus long v2" << std::endl;
    }

    return 0;
}
