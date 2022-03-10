#include <iostream>
#include <math.h>

float distanciaEuclidianaOrigem(float x = 0, float y = 0, float z = 0) {
    float resultado = sqrt(x * x + y * y + z * z);
    return resultado;
}

int main()
{
    float x, y, z;
    std::cin >> x >> y >> z;
    
    std::cout << "\n" << distanciaEuclidianaOrigem(x) << "\n\n";
    std::cout << "\n" << distanciaEuclidianaOrigem(x, y) << "\n";
}