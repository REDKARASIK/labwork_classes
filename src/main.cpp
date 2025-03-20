#include <iostream>
#include <array.h>

int main() {
    Array a;
    a.push_back(1);
    a.push_front(2);
    a.pop_back();
    a.pop_front()
    std::cout << a[0] << std::endl; // 2
    std::cout << a[a.size() - 1] << std::endl; // 1
    std::cout << a.capacity() << std::endl; // 20
    Array b(20);
    Array c = a + b; // в c записываются сначала элементы а потом б
    Array x(c);
    Array y;
    y = b;
    if (y == b) { // сравниваются все элементы
        std::cout << "equal\n" << std::endl;
    }
    if (!(x != c)) {
        std::cout << "equal" << std::endl;
    }
    y.set_capacity(40);
    if (y.empty()) {
        std::cout << "empty" << std::endl;
    }
    std::cout << a << std::endl; // [1, 2, 3, 4, 5] - пример вывода
    return 0;
}
