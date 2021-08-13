cc_test(
	name = "test1",
	srcs = glob(["**/*.cc"]),
	deps = [
		"//third_party/googletest:gtest",
		"//third_party/googletest:gtest_main", #if test source file has no main()
	],
)

cc_test(
	name = "bazelDependencyTest",
	srcs = ["bazel_dependency_test.*"],
	deps = [
		"//third_party/googletest:gtest",
		"//third_party/googletest:gtest_main", #if test source file has no main()
		"//third_party/eventpp:eventpp",
		"//third_party/eigen-3.3.9:eigen"
	],
)

cc_test(
	name = "pubsubTest",
	srcs = ["pubsub/pubsub_test.*"],
	deps = [
		"//third_party/googletest:gtest",
		"//third_party/googletest:gtest_main", #if test source file has no main()
		"//src/util/pub_sub:publisher",
		"//src/util/pub_sub:subscriber",
	]
)
