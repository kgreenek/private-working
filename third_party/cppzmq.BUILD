# Description
#   C++ binding for 0MQ http://www.zeromq.org

licenses(["notice"])  # MIT

exports_files(["LICENSE"])

cc_library(
    name = "cppzmq",
    hdrs = [
        "zmq.hpp",
        "zmq_addon.hpp",
    ],
    includes = ["."],
    deps = [
        "//external:zmq",
    ],
    visibility = ["//visibility:public"],
)
