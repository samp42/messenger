workspace(name = 'robot')

bind(
  name = 'gtest',
  actual = '//third_party/googletest:googlemock',
)

bind(
  name = 'gtest_main',
  actual = '//third_party/googletest:googlemock_main',
)

new_local_repository(
    name = "googletest",
    path = "//third_party:googletest",
    build_file = "BUILD.bazel",
)

new_local_repository(
    name = "eigen",
    path = "//third_party:eigen",
    build_file = "BUILD",
)

new_local_repository(
    name = "eventpp",
    path = "//third_party:eventpp",
    build_file = "BUILD",
)
