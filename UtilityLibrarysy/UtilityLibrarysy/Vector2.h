#pragma once
#ifndef VECTOR2_H
#define VECTOR2_H

#include <cmath>

class Vector2 {
public:
    float x, y;

    // Constructor por defecto
    Vector2() : x(0), y(0) {}

    // Constructor parametrizado
    Vector2(float x, float y) : x(x), y(y) {}

    // Sobrecarga del operador +
    Vector2 operator+(const Vector2& other) const {
        return Vector2(x + other.x, y + other.y);
    }

    // Sobrecarga del operador -
    Vector2 operator-(const Vector2& other) const {
        return Vector2(x - other.x, y - other.y);
    }

    // Sobrecarga del operador *
    Vector2 operator*(float scalar) const {
        return Vector2(x * scalar, y * scalar);
    }

    // Método para calcular la magnitud
    float magnitude() const {
        return std::sqrt(x * x + y * y);
    }

    // Método para normalizar el vector
    Vector2 normalize() const {
        float mag = magnitude();
        return (mag == 0) ? Vector2(0, 0) : Vector2(x / mag, y / mag);
    }

    // Método para acceder a los datos
    float* data() {
        return &x;
    }

    const float* data() const {
        return &x;
    }
};

#endif // VECTOR2_H

