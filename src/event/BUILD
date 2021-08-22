load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "messenger_event",
    hdrs = ["messenger_event.h"],
    deps = [
        ":event_types",
        ":event_callback",
        "//pubsub:subscriber"
    ]
)

cc_library(
    name = "event_policy",
    hdrs = ["event_policy.h"],
    deps = [
        ":botx_event"
    ]
)

cc_library(
    name = "event_callback",
    hdrs = ["event_callback.h"],
    deps = [
        "//pubsub:subscriber"
    ]
)

cc_library(
    name = "event_types",
    srcs = ["event_types.cc"].
    hdrs = ["event_types.h"],
    deps = []
)

