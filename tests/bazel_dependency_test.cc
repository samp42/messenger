#include "gtest/gtest.h"
#include "../third_party/eventpp/include/eventpp/eventqueue.h"
#include "../third_party/eventpp/include/eventpp/callbacklist.h"
#include <string>

namespace {

GTEST_TEST( Bazel_Include_Test, Eventpp_Include_Test ) {

	ASSERT_NO_THROW({
		eventpp::CallbackList<void()> start;
	});

};

} // namespace 
