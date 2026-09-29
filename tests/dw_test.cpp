#include "dw.h"
#include <gtest/gtest.h>

TEST(LinearSearch, FindsTargetInMiddle) {
  int values[] = {4, 8, 15, 16, 23};
  EXPECT_EQ(linear_search(values, 5, 15), 2);
}

TEST(LinearSearch, ReturnsMinusOneWhenNotFound) {
  int values[] = {1, 2, 3};
  EXPECT_EQ(linear_search(values, 3, 99), -1);
}

TEST(LinearSearch, FindsFirstOfDuplicates) {
  int values[] = {5, 5, 5};
  EXPECT_EQ(linear_search(values, 3, 5), 0);
}
