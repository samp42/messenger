#include "gtest/gtest.h"
#include "time/time_util.h"

namespace {

GTEST_TEST( Time_Util_Test, Duration_Template_Test ) {

    ASSERT_NO_THROW({
	nanoseconds n1 = 1ns;
        microseconds u1 = 1us;
        milliseconds m1 = 1ms;
        seconds s1 = 1s;
    });

};

GTEST_TEST( Time_Util_Test, Clock_Test ) {

    ASSERT_NO_THROW({
    
    });

};

GTEST_TEST( Time_Util_Test, Time_Cast_Test ) {

    ASSERT_NO_THROW({
	nanoseconds n1 = 1ns;
        microseconds u1 = 1us;
        milliseconds m1 = 1ms;
        seconds s1 = 1s;

        nanoseconds n2 = TimeCast<nanoseconds>(m1);
        microseconds u2 = TimeCast<microseconds>(7ns);
        milliseconds m2 = TimeCast<seconds>(2s);
        seconds s2 = TimeCast<seconds>(10000000000ns);
    });

};

} // namespace 
