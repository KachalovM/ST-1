// Copyright 2024 Kachalov Mikhail
#include <gtest/gtest.h>
#include <cstdint>
#include "alg.h"

TEST(CheckPrimeTest, HandlesPrimeNumbers) {
    EXPECT_TRUE(checkPrime(2));
    EXPECT_TRUE(checkPrime(3));
    EXPECT_TRUE(checkPrime(5));
    EXPECT_TRUE(checkPrime(11));
}

TEST(CheckPrimeTest, HandlesNonPrimeNumbers) {
    EXPECT_FALSE(checkPrime(1));
    EXPECT_FALSE(checkPrime(4));
    EXPECT_FALSE(checkPrime(9));
    EXPECT_FALSE(checkPrime(15));
}

TEST(NPrimeTest, HandlesSmallPrimes) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(2), 3);
    EXPECT_EQ(nPrime(3), 5);
    EXPECT_EQ(nPrime(4), 7);
    EXPECT_EQ(nPrime(5), 11);
}

TEST(NextPrimeTest, HandlesPrimeSequences) {
    EXPECT_EQ(nextPrime(2), 3);
    EXPECT_EQ(nextPrime(3), 5);
    EXPECT_EQ(nextPrime(10), 11);
    EXPECT_EQ(nextPrime(20), 23);
}

TEST(SumPrimeTest, HandlesPrimeSum) {
    EXPECT_EQ(sumPrime(10), 17);
    EXPECT_EQ(sumPrime(20), 77);
}

TEST(CheckPrimeTest, TestCheckPrimeNumbersFalse) {
    EXPECT_FALSE(checkPrime(0));
    EXPECT_FALSE(checkPrime(1));
}

TEST(NPrimeTest, TestCheckNPrime) {
    EXPECT_EQ(nPrime(1), 2);
    EXPECT_EQ(nPrime(1e2), 541);
}

TEST(SumPrimeTest, TestSumPrime) {
    EXPECT_EQ(sumPrime(1e1), 17);
    EXPECT_EQ(sumPrime(5e1), 328);
    EXPECT_EQ(sumPrime(2e2), 4227);
}

TEST(NPrimeTest, HandlesLargerPrimes) {
    EXPECT_EQ(nPrime(10), 29);
    EXPECT_EQ(nPrime(20), 71);
}

TEST(SumPrimeTest, HandlesSmallBounds) {
    EXPECT_EQ(sumPrime(0), 0);
    EXPECT_EQ(sumPrime(1), 0);
}
