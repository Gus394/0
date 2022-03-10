#include <iostream>
#include <math.h>

float distanciaEuclidiana(float x1, float x2, float y1, float y2);
float distanciaEuclidiana(float x1, float x2, float y1, float y2, float z1, float z2);

int main()
{
    float x1, y1, z1, x2, y2, z2;
    std::cin >> x1 >> y1 >> x2 >> y2;
    std::cout << "\n" << distanciaEuclidiana(x1, x2, y1, y2) << "\n\n";

    std::cin >> x1 >> y1 >> z1 >> x2 >> y2 >> z2;
    std::cout << "\n" << distanciaEuclidiana(x1, x2, y1, y2, z1, z2) << "\n";
}

float distanciaEuclidiana(float x1, float x2, float y1, float y2) {
    float resultado = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    return resultado;
}

float distanciaEuclidiana(float x1, float x2, float y1, float y2, float z1, float z2) {
    float resultado = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
    return resultado;
}