#include "vec3.hpp"

void printVec3(Vec3 v);

int main() {
    Vec3 v1(1.0, 2.0, 3.0);
    Vec3 v2(3.0, 2.0, 1.0);
    cout << "v1 = ";
    printVec3(v1);
    cout << "v2 = ";
    printVec3(v2);
    cout << "v1 + v2 = ";
    printVec3(v1 + v2);
    cout << "v1 - v2 = ";
    printVec3(v1 - v2);
    cout << "v1 * v2 = ";
    printVec3(v1 * v2);
    cout << "v1 / v2 = ";
    printVec3(v1 / v2);
    return 0;
}

void printVec3(Vec3 v) {
    cout << "(" << v.x
         << "," << v.y
         << "," << v.z
         << ")" << endl;
}