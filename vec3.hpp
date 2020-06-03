#ifndef GENJI_VEC3_HPP
#define GENJI_VEC3_HPP

#include <iostream>
#include <cmath>

using namespace std;

struct Vec3 {
    double x, y, z;
    Vec3() : x(1.0), y(1.0), z(1.0) {}
    Vec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
    const Vec3& operator+() const { return *this; }
    const Vec3& operator-() const { return Vec3(-x, -y, -z); }
    inline Vec3& operator+=(const Vec3& operand);
    inline Vec3& operator-=(const Vec3& operand);
    inline Vec3& operator*=(const Vec3& operand);
    inline Vec3& operator/=(const Vec3& operand);
    inline Vec3& operator*=(const double scale);
    inline Vec3& operator/=(const double scale);
    inline double length();
    inline Vec3& unit();
};

inline Vec3 operator+(const Vec3& v1, const Vec3& v2) {
    return Vec3(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

inline Vec3 operator-(const Vec3& v1, const Vec3& v2) {
    return Vec3(v1.x - v2.x, v1.y - v2.y, v1.z - v2.z);
}

inline Vec3 operator*(const Vec3& v1, const Vec3& v2) {
    return Vec3(v1.x * v2.x, v1.y * v2.y, v1.z * v2.z);
}

inline Vec3 operator/(const Vec3& v1, const Vec3& v2) {
    try {
        v1.x / v2.x;
        v1.y / v2.y;
        v1.z / v2.z;
    }
    catch (std::logic_error e) {
        std::cerr << e.what();
    }
    return Vec3(v1.x / v2.x, v1.y / v2.y, v1.z / v2.z);
}

inline Vec3& Vec3::operator+=(const Vec3& operand){
    x += operand.x;
    y += operand.y;
    z += operand.z;
    return *this;
}

inline Vec3& Vec3::operator-=(const Vec3& operand){
    x -= operand.x;
    y -= operand.y;
    z -= operand.z;
    return *this;
}

inline Vec3& Vec3::operator*=(const Vec3& operand) {
    x *= operand.x;
    y *= operand.y;
    z *= operand.z;
    return *this;
}

inline Vec3& Vec3::operator/=(const Vec3& operand) {
    try {
        x /= operand.x;
        y /= operand.y;
        z /= operand.z;
    }
    catch (logic_error e) {
        cerr << e.what();
    }
    return *this;
}

inline Vec3& Vec3::operator*=(const double scale) {
    x *= scale;
    y *= scale;
    z *= scale;
}

inline Vec3& Vec3::operator/=(const double scale) {
    try {
        x /= scale;
        y /= scale;
        z /= scale;
    }
    catch (logic_error e) {
        cerr << e.what();
    }
    return *this;
}

inline double Vec3::length() {
    return sqrt(x*x + y*y + z*z);
}

inline Vec3& Vec3::unit() {
    x /= this->length();
    y /= this->length();
    z /= this->length();
    return *this;
}
#endif //GENJI_VEC3_HPP
