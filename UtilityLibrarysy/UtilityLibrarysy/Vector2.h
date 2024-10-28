#pragma once
#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>

class Vector2 {
public:
    float x;
    float y;

    // Constructor por defecto
    Vector2();

    // Constructor parametrizado
    Vector2(float x, float y);

    // Sobrecarga del operador + para suma de vectores
    Vector2 operator+(const Vector2& other) const;

    // Sobrecarga del operador - para resta de vectores
    Vector2 operator-(const Vector2& other) const;

    // Sobrecarga del operador * para multiplicación por un escalar
    Vector2 operator*(float scalar) const;

    // Método para calcular la magnitud del vector
    float magnitude() const;

    // Método para normalizar el vector
    Vector2 normalize() const;

    // Método para acceder a los datos del vector
    float* data();

    // Versión constante de data
    const float* data() const;
};

#endif
