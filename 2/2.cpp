#include <iostream>

void lerCoordenadas(float& x, float& y, float& z) {
    std::cin >> x >> y >> z;
    std::cout << "\n( " << x << " , " << y << " , " << z << " )\n";
}

int main()
{
    float x = 0, y = 0, z = 0;
    lerCoordenadas(x, y, z);
}