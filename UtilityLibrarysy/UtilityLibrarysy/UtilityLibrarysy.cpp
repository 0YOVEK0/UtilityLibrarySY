#include <iostream>
#include "Vector2.h"

int main() {
    Vector2 v1(3.0f, 4.0f);
    Vector2 v2;
    Vector2 v3 = v1 + Vector2(1.0f, 2.0f);
    Vector2 v4 = v1 - Vector2(0.5f, 0.5f);
    Vector2 v5 = v1 * 2.0f;
    float mag = v1.magnitude();
    Vector2 v6 = v1.normalize();

    std::cout << "v3: (" << v3.x << ", " << v3.y << ")\n";
    std::cout << "v4: (" << v4.x << ", " << v4.y << ")\n";
    std::cout << "v5: (" << v5.x << ", " << v5.y << ")\n";
    std::cout << "Magnitude of v1: " << mag << "\n";
    std::cout << "Normalized v1: (" << v6.x << ", " << v6.y << ")\n";

    return 0;
}