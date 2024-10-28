#include "Vector3.h"

// Constructor por defecto
Vector3::Vector3() : x(0.0f), y(0.0f), z(0.0f) {}

// Constructor parametrizado
Vector3::Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

// Sobrecarga del operador + para la suma de vectores
Vector3 Vector3::operator+(const Vector3& other) const {
    return Vector3(x + other.x, y + other.y, z + other.z);
}

// Sobrecarga del operador - para la resta de vectores
Vector3 Vector3::operator-(const Vector3& other) const {
    return Vector3(x - other.x, y - other.y, z - other.z);
}

// Sobrecarga del operador * para la multiplicación por un escalar
Vector3 Vector3::operator*(float scalar) const {
    return Vector3(x * scalar, y * scalar, z * scalar);
}

// Método para calcular la magnitud del vector
float Vector3::magnitude() const {
    return std::sqrt(x * x + y * y + z * z);
}

// Método para normalizar el vector
Vector3 Vector3::normalize() const {
    float mag = magnitude();
    if (mag == 0.0f) {
        return Vector3(0.0f, 0.0f, 0.0f);
    }
    return Vector3(x / mag, y / mag, z / mag);
}

// Método para acceder a los datos del vector
float* Vector3::data() {
    return &x;
}

// Versión constante de data
const float* Vector3::data() const {
    return &x;
}
