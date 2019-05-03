#include "gmock/gmock.h"
#include <vector>

using namespace std;

TEST(example, parsing)
{
    vector<int> array = {32, 32, 32};
    EXPECT_THAT(array, testing::ElementsAre(31, 32, 32));
}
