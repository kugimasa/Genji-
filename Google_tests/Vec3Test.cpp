#include "gtest/gtest.h"
#include "../vec3.hpp"

TEST(Vec3Init,  CorrectXVal){
    Vec3 v(1.0, 2.0, 3.0);
    EXPECT_DOUBLE_EQ(v.x, 1.0);
}

TEST(Vec3Init,  CorrectYVal){
    Vec3 v(1.0, 2.0, 3.0);
    EXPECT_DOUBLE_EQ(v.y, 2.0);
}

TEST(Vec3Init,  CorrectZVal){
    Vec3 v(1.0, 2.0, 3.0);
    EXPECT_DOUBLE_EQ(v.z, 3.0);
}

//Default Constructor
TEST(Vec3Init,  CorrectDefaultXVal){
    Vec3 v;
    EXPECT_DOUBLE_EQ(v.x, 1.0);
}

TEST(Vec3Init,  CorrectDefaultYVal){
    Vec3 v;
    EXPECT_DOUBLE_EQ(v.y, 1.0);
}

TEST(Vec3Init,  CorrectDefaultZVal){
    Vec3 v;
    EXPECT_DOUBLE_EQ(v.z, 1.0);
}