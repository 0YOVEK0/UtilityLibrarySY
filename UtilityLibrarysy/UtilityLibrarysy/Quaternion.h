#pragma once
#ifndef QUATERNION_H
#define QUATERNION_H

#include <cmath>
#include "Vector3.h"

// Definir M_PI si no está definido
#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

class Quaternion {
public:
    float w, x, y, z;

    // Constructor por defecto
    Quaternion() : w(0), x(0), y(0), z(0) {}

    // Constructor parametrizado
    Quaternion(float w, float x, float y, float z) : w(w), x(x), y(y), z(z) {}

    // Constructor a partir de un eje y un ángulo de rotación
    Quaternion(const Vector3& axis, float angle) {
        float halfAngle = angle * 0.5f * (M_PI / 180.0f); // Convertir a radianes
        w = std::cos(halfAngle);
        float s = std::sin(halfAngle);
        this->x = axis.x * s;
        this->y = axis.y * s;
        this->z = axis.z * s;
    }

    // Sobrecarga de operador +
    Quaternion operator+(const Quaternion& other) const {
        return Quaternion(w + other.w, x + other.x, y + other.y, z + other.z);
    }

    // Sobrecarga de operador *
    Quaternion operator*(const Quaternion& other) const {
        return Quaternion(
            w * other.w - x * other.x - y * other.y - z * other.z,
            w * other.x + x * other.w + y * other.z - z * other.y,
            w * other.y - x * other.z + y * other.w + z * other.x,
            w * other.z + x * other.y - y * other.x + z * other.w
        );
    }

    // Sobrecarga de operador * para multiplicación por escalar
    Quaternion operator*(float scalar) const {
        return Quaternion(w * scalar, x * scalar, y * scalar, z * scalar);
    }

    // Método para calcular la magnitud
    float magnitude() const {
        return std::sqrt(w * w + x * x + y * y + z * z);
    }

    // Método para normalizar el cuaternión
    Quaternion normalize() const {
        float mag = magnitude();
        return (mag > 0) ? Quaternion(w / mag, x / mag, y / mag, z / mag) : Quaternion();
    }

    // Método para calcular el conjugado
    Quaternion conjugate() const {
        return Quaternion(w, -x, -y, -z);
    }

    // Método para calcular el inverso
    Quaternion inverse() const {
        float magSq = w * w + x * x + y * y + z * z;
        return conjugate() * (1.0f / magSq);
    }

    // Método para rotar un vector
    Vector3 rotate(const Vector3& v) const {
        Quaternion qv(0, v.x, v.y, v.z);
        Quaternion qConjugate = conjugate();
        Quaternion result = (*this * qv) * qConjugate;
        return Vector3(result.x, result.y, result.z);
    }

    // Método para acceder a los datos del cuaternión
    const float* data() const {
        return &w;
    }
};

#endif // QUATERNION_H
