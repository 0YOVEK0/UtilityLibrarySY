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

// Sobrecarga del operador * para multiplicaci�n por un escalar
Vector2 Vector2::operator*(float scalar) const {
    return Vector2(x * scalar, y * scalar);
}

// M�todo para calcular la magnitud del vector
float Vector2::magnitude() const {
    return std::sqrt(x * x + y * y);
}

// M�todo para normalizar el vector
Vector2 Vector2::normalize() const {
    float mag = magnitude();
    if (mag == 0.0f) {
        return Vector2(0.0f, 0.0f);
    }
    return Vector2(x / mag, y / mag);
}

// M�todo para acceder a los datos del vector
float* Vector2::data() {
    return &x;
}

// Versi�n constante de data
const float* Vector2::data() const {
    return &x;
}
