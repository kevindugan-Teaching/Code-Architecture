#include "Vector.h"
#include "gmock/gmock.h"

TEST(standardVector, constructor_double){
    // Test default constructor
    Vector<double> a;
    EXPECT_THAT( a.size(), 0);

    // Test zero vector
    Vector<double> b(3);
    EXPECT_THAT( b.size(), 3);

    // Test values vector
    Vector<double> c({-1, 2.3, 4.5, -4});
    EXPECT_THAT( c.size(), 4);
}

TEST(standardVector, l2norm_double){
    Vector<double> a({-1, 2, 1, -3, 1});
    EXPECT_THAT( a.l2norm(), 4.0 );
}

TEST(standardVector, constructor_int){
    // Test default constructor
    Vector<int> a;
    EXPECT_THAT( a.size(), 0);

    // Test zero vector
    Vector<int> b(3);
    EXPECT_THAT( b.size(), 3);

    // Test values vector
    Vector<int> c({-1, 2, 4, -4});
    EXPECT_THAT( c.size(), 4);
}

TEST(standardVector, l2norm_int){
    Vector<int> a({-1, 2, 1, -3, 1});
    EXPECT_THAT( a.l2norm(), 4 );
}