load("@rules_cc//cc:defs.bzl", "cc_library")

cc_library(
    name = "publisher",
    srcs = ["publisher.cc"],
    hdrs = ["publisher.h"],
    deps = [
        "//src/util/botx_event:botx_event",
        "//third_party/eventpp:eventpp",
        ":subscriber",
    ],
)

cc_library(
    name = "subscriber",
    srcs = ["subscriber.cc"],
    hdrs = ["subscriber.h"],
    deps = [
        ":publisher",
    ],
)
