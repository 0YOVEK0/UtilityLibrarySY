#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"
#include "Quaternion.h"

int main() {
    // Ejemplo de uso de Vector2
    Vector2 v2(3.0f, 4.0f);
    std::cout << "Vector2: (" << v2.x << ", " << v2.y << ")\n";

    // Ejemplo de uso de Vector3
    Vector3 v3(1.0f, 0.0f, 0.0f);
    std::cout << "Vector3: (" << v3.x << ", " << v3.y << ", " << v3.z << ")\n";

    // Ejemplo de uso de Vector4
    Vector4 v4(1.0f, 2.0f, 3.0f, 4.0f);
    std::cout << "Vector4: (" << v4.x << ", " << v4.y << ", " << v4.z << ", " << v4.w << ")\n";

    // Ejemplo de uso de Quaternion
    Quaternion q1(1.0f, 0.0f, 0.0f, 0.0f);
    Vector3 axis(0.0f, 1.0f, 0.0f);
    float angle = 90.0f;
    Quaternion q2(axis, angle);

    Quaternion q3 = q1 + q2;
    Quaternion q4 = q1 * q2;
    Quaternion q5 = q2 * 0.5f;
    float mag = q2.magnitude();
    Quaternion q6 = q2.normalize();
    Quaternion qConjugate = q2.conjugate();
    Quaternion qInverse = q2.inverse();

    Vector3 v(1.0f, 0.0f, 0.0f);
    Vector3 vRotated = q2.rotate(v);

    // Mostrar resultados
    std::cout << "Magnitude of q2: " << mag << "\n";
    std::cout << "Rotated Vector: (" << vRotated.x << ", " << vRotated.y << ", " << vRotated.z << ")\n";

    return 0;
}
