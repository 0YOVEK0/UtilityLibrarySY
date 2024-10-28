#include <iostream>
#include "Vector2.h"
#include "Vector3.h"

int main() {
    // Prueba de Vector2
    Vector2 v2_1(3.0f, 4.0f);
    Vector2 v2_2(1.0f, 2.0f);
    Vector2 result2 = v2_1 + v2_2;
    std::cout << "Vector2 Result: (" << result2.x << ", " << result2.y << ")\n";

    // Prueba de Vector3
    Vector3 v3_1(3.0f, 4.0f, 5.0f);
    Vector3 v3_2(1.0f, 2.0f, 3.0f);
    Vector3 result3 = v3_1 + v3_2;
    std::cout << "Vector3 Result: (" << result3.x << ", " << result3.y << ", " << result3.z << ")\n";

    return 0;
}
