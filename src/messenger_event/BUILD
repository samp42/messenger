load("@rules_cc//cc:defs.bzl", "cc_library")

cc_binary(
	name = "botx_event",
	srcs = ["botx_event.h"],
)

cc_library(
	name = "event_policy",
	srcs = ["event_policy.h"],
        deps = [":botx_event"],
)

