#include "Vector2.h"

// Constructor por defecto
Vector2::Vector2() : x(0.0f), y(0.0f) {}

// Constructor parametrizado
Vector2::Vector2(float x, float y) : x(x), y(y) {}

// Sobrecarga del operador + para suma de vectores
Vector2 Vector2::operator+(const Vector2& other) const {
    return Vector2(x + other.x, y + other.y);
}

// Sobrecarga del operador - para resta de vectores
Vector2 Vector2::operator-(const Vector2& other) const {
    return Vector2(x - other.x, y - other.y);
}

// Sobrecarga del operador * para multiplicación por un escalar
Vector2 Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

// Método para calcular la magnitud del vector
float Vector2::magnitude() const {
    return std::sqrt(x * x + y * y);
}

// Método para normalizar el vector
Vector2 Vector2::normalize() const {
    float mag = magnitude();
    if (mag == 0.0f) {
        return Vector2(0.0f, 0.0f);
    }
    return Vector2(x / mag, y / mag);
}

// Método para acceder a los datos del vector
float* Vector2::data() {
    return &x;
}

// Versión constante de data
const float* Vector2::data() const {
    return &x;
}
