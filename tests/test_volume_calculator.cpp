
#include <gtest/gtest.h>
#include "FooParameterization/Sphere.h"
#include "FooParameterization/VolumeCalculator.h"

TEST(VolumeCalculatorTest, CalculatesCorrectVolume) {
    FooParameterization::Sphere sphere(3.0);
    double expectedVolume = (4.0 / 3.0) * M_PI * std::pow(3.0, 3);
    double actualVolume = FooParameterization::VolumeCalculator::calculateVolume(sphere);

    EXPECT_DOUBLE_EQ(expectedVolume, actualVolume);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
