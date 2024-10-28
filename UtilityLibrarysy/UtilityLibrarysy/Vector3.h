#pragma once
#ifndef VECTOR3_H
#define VECTOR3_H

#include <cmath>

class Vector3 {
public:
    float x, y, z;

    // Constructor por defecto
    Vector3();

    // Constructor parametrizado
    Vector3(float x, float y, float z);

    // Sobrecarga del operador + para la suma de vectores
    Vector3 operator+(const Vector3& other) const;

    // Sobrecarga del operador - para la resta de vectores
    Vector3 operator-(const Vector3& other) const;

    // Sobrecarga del operador * para la multiplicación por un escalar
    Vector3 operator*(float scalar) const;

    // Método para calcular la magnitud del vector
    float magnitude() const;

    // Método para normalizar el vector
    Vector3 normalize() const;

    // Método para acceder a los datos del vector
    float* data();

    // Versión constante de data
    const float* data() const;
};

#endif
