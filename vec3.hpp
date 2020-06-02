#ifndef GENJI_VEC3_HPP
#define GENJI_VEC3_HPP

struct Vec3 {
    double x, y, z;
    Vec3() : x(1.0), y(1.0), z(1.0) {}
    Vec3(double _x, double _y, double _z) : x(_x), y(_y), z(_z) {}
};

#endif //GENJI_VEC3_HPP
