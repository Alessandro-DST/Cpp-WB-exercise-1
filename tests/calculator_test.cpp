#include <gtest/gtest.h>
#include "my_lib/calculator.h"
#include <math.h>

// Addition
TEST(AdditionTest, PositiveNumbers) {
    EXPECT_EQ(my_lib::add(1, 2), 3);
    EXPECT_EQ(my_lib::add(0.5, 0), 0.5);
    EXPECT_EQ(my_lib::add(0, 0), 0);
}

TEST(AdditionTest, NegativeNumbers) {
    EXPECT_EQ(my_lib::add(-1, -2), -3);
    EXPECT_EQ(my_lib::add(-0.5, 0), -0.5);
}

TEST(AdditionTest, PositiveAndNegativeNumbers) {
    EXPECT_EQ(my_lib::add(1, -2), -1);
    EXPECT_EQ(my_lib::add(0.5, -0.25), 0.25);
}

// Subtraction
TEST(SubtractionTest, PositiveNumbers) {
    EXPECT_EQ(my_lib::sub(1, 2), -1);
    EXPECT_EQ(my_lib::sub(0.5, 0), 0.5);
    EXPECT_EQ(my_lib::sub(0, 0), 0);
}

TEST(SubtractionTest, NegativeNumbers) {
    EXPECT_EQ(my_lib::sub(-1, -2), 1);
    EXPECT_EQ(my_lib::sub(-0.5, 0), -0.5);
}

TEST(SubtractionTest, PositiveAndNegativeNumbers) {
    EXPECT_EQ(my_lib::sub(1, -2), 3);
    EXPECT_EQ(my_lib::sub(0.5, -0.25), 0.75);
}

// Multiplication
TEST(MultiplicationTest, PositiveNumbers) {
    EXPECT_EQ(my_lib::mul(1, 2), 2);
}

TEST(MultiplicationTest, ZeroMultipication) {
    EXPECT_EQ(my_lib::mul(1, 0), 0);
}

TEST(MultiplicationTest, NegativeNumbers) {
    EXPECT_EQ(my_lib::mul(-1, -2), 2);
}

TEST(MultiplicationTest, PositiveAndNegativeNumbers) {
    EXPECT_EQ(my_lib::mul(0.5, -1), -0.5);
}

// Division
TEST(DivisionTest, PositiveNumbers) {
    EXPECT_EQ(my_lib::div(1, 2), 0.5);
}

TEST(DivisionTest, DivideByZeroThrow) {
    EXPECT_THROW(my_lib::div(1, 0), std::invalid_argument);
}

TEST(DivisionTest, NegativeNumbers) {
    EXPECT_EQ(my_lib::div(-1, -2), 0.5);
}

TEST(DivisionTest, PositiveAndNegativeNumbers) {
    EXPECT_EQ(my_lib::div(0.5, -2), -0.25);
}