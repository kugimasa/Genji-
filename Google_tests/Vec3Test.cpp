#include "gtest/gtest.h"
#include "../vec3.hpp"

TEST(Vec3Init, CorrectVal){
    Vec3 v(1.0, 2.0, 3.0);
    EXPECT_DOUBLE_EQ(v.x, 1.0);
    EXPECT_DOUBLE_EQ(v.y, 2.0);
    EXPECT_DOUBLE_EQ(v.z, 3.0);
}

//Default Constructor
TEST(Vec3Init, CorrectDefaultVal){
    Vec3 v;
    EXPECT_DOUBLE_EQ(v.x, 1.0);
    EXPECT_DOUBLE_EQ(v.y, 1.0);
    EXPECT_DOUBLE_EQ(v.z, 1.0);
}

//PosNeg
TEST(Vec3PosNeg, Pos){
    Vec3 v1;
    Vec3 v2(1.0, 1.0, 1.0);
    v1 = +v1;
    EXPECT_DOUBLE_EQ(v1.x, v2.x);
    EXPECT_DOUBLE_EQ(v1.y, v2.y);
    EXPECT_DOUBLE_EQ(v1.z, v2.z);
}

TEST(Vec3PosNeg, Neg){
    Vec3 v1;
    Vec3 v2(-1.0, -1.0, -1.0);
    v1 = -v1;
    EXPECT_DOUBLE_EQ(v1.x, v2.x);
    EXPECT_DOUBLE_EQ(v1.y, v2.y);
    EXPECT_DOUBLE_EQ(v1.z, v2.z);
}

TEST(Arithmetic, Add){
    Vec3 v1;
    Vec3 v2(1.0, 2.0, 3.0);
    Vec3 value = v1 + v2;
    EXPECT_DOUBLE_EQ(value.x, 2.0);
    EXPECT_DOUBLE_EQ(value.y, 3.0);
    EXPECT_DOUBLE_EQ(value.z, 4.0);
}

TEST(Arithmetic, AddEq){
    Vec3 value;
    Vec3 operand(1.0, 2.0, 3.0);
    value += operand;
    EXPECT_DOUBLE_EQ(value.x, 2.0);
    EXPECT_DOUBLE_EQ(value.y, 3.0);
    EXPECT_DOUBLE_EQ(value.z, 4.0);
}

TEST(Arithmetic, Sub){
    Vec3 v1;
    Vec3 v2(1.0, 2.0, 3.0);
    Vec3 value = v2 - v1;
    EXPECT_DOUBLE_EQ(value.x, 0.0);
    EXPECT_DOUBLE_EQ(value.y, 1.0);
    EXPECT_DOUBLE_EQ(value.z, 2.0);
}

TEST(Arithmetic, SubEq){
    Vec3 value;
    Vec3 operand(1.0, 2.0, 3.0);
    value -= operand;
    EXPECT_DOUBLE_EQ(value.x, 0.0);
    EXPECT_DOUBLE_EQ(value.y, -1.0);
    EXPECT_DOUBLE_EQ(value.z, -2.0);
}

TEST(Arithmetic, Mul){
    Vec3 v1;
    Vec3 v2(1.0, 2.0, 3.0);
    Vec3 value = v1 * v2;
    EXPECT_DOUBLE_EQ(value.x, 1.0);
    EXPECT_DOUBLE_EQ(value.y, 2.0);
    EXPECT_DOUBLE_EQ(value.z, 3.0);
}

TEST(Arithmetic, MulEq){
    Vec3 value;
    Vec3 operand(1.0, 2.0, 3.0);
    value *= operand;
    EXPECT_DOUBLE_EQ(value.x, 1.0);
    EXPECT_DOUBLE_EQ(value.y, 2.0);
    EXPECT_DOUBLE_EQ(value.z, 3.0);
}

TEST(Arithmetic, Div){
    Vec3 v1;
    Vec3 v2(1.0, 2.0, 4.0);
    Vec3 value = v1 / v2;
    EXPECT_DOUBLE_EQ(value.x, 1.0);
    EXPECT_DOUBLE_EQ(value.y, 0.5);
    EXPECT_DOUBLE_EQ(value.z, 0.25);
}

TEST(Arithmetic, DivEq){
    Vec3 value;
    Vec3 operand(1.0, 2.0, 4.0);
    value /= operand;
    EXPECT_DOUBLE_EQ(value.x, 1.0);
    EXPECT_DOUBLE_EQ(value.y, 0.5);
    EXPECT_DOUBLE_EQ(value.z, 0.25);
}

TEST(Length, CorrectVal){
    Vec3 v(3.0, 4.0, 0.0);
    EXPECT_DOUBLE_EQ(v.length(), 5.0);
}

TEST(Unit, CorrectVal){
    Vec3 v(0.0, 2.0, 0.0);
    Vec3 unit = v.unit();
    EXPECT_DOUBLE_EQ(unit.x, 0.0);
    EXPECT_DOUBLE_EQ(unit.y, 1.0);
    EXPECT_DOUBLE_EQ(unit.z, 0.0);
}