#include <iostream>
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

int main() {
    // Pruebas para Vector2
    Vector2 v1_2D(3.0f, 4.0f);
    Vector2 v2_2D = v1_2D + Vector2(1.0f, 2.0f);
    std::cout << "Vector2 v2: (" << v2_2D.x << ", " << v2_2D.y << ")\n";

    // Pruebas para Vector3
    Vector3 v1_3D(3.0f, 4.0f, 5.0f);
    Vector3 v2_3D = v1_3D + Vector3(1.0f, 2.0f, 3.0f);
    std::cout << "Vector3 v2: (" << v2_3D.x << ", " << v2_3D.y << ", " << v2_3D.z << ")\n";

    // Pruebas para Vector4
    Vector4 v1_4D(1.0f, 2.0f, 3.0f, 4.0f);
    Vector4 v2_4D = v1_4D + Vector4(1.0f, 1.0f, 1.0f, 1.0f);
    std::cout << "Vector4 v2: (" << v2_4D.x << ", " << v2_4D.y << ", " << v2_4D.z << ", " << v2_4D.w << ")\n";

    return 0;
}
