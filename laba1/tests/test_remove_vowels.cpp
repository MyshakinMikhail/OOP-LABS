#include "../src/remove_vowels.h"
#include <gtest/gtest.h>

TEST(RemoveVowelsTest, BasicCases) {
    EXPECT_EQ(removeVowels("This website is for losers LOL!"),"Ths wbst s fr lsrs LL!");
    EXPECT_EQ(removeVowels("AEIOUaeiou"), "");
    EXPECT_EQ(removeVowels("Hello World"), "Hll Wrld");
    EXPECT_EQ(removeVowels(""), "");
    EXPECT_EQ(removeVowels("xyz"), "xz");
}
