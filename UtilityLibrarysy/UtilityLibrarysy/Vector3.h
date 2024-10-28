#pragma once
#ifndef VECTOR3_H

#define VECTOR3_H

#include <cmath>

class Vector3 {
public:
    float x, y, z;

    Vector3() : x(0), y(0), z(0) {}
    Vector3(float x, float y, float z) : x(x), y(y), z(z) {}

    Vector3 operator+(const Vector3& other) const {
        return Vector3(x + other.x, y + other.y, z + other.z);
    }

    Vector3 operator-(const Vector3& other) const {
        return Vector3(x - other.x, y - other.y, z - other.z);
    }

    Vector3 operator*(float scalar) const {
        return Vector3(x * scalar, y * scalar, z * scalar);
    }

    float magnitude() const {
        return std::sqrt(x * x + y * y + z * z);
    }

    Vector3 normalize() const {
        float mag = magnitude();
        return (mag == 0) ? Vector3(0, 0, 0) : Vector3(x / mag, y / mag, z / mag);
    }

    float* data() {
        return &x;
    }

    const float* data() const {
        return &x;
    }
};

#endif // VECTOR3_H
