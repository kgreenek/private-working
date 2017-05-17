cc_library(
    name = "zmq",
    srcs = glob([
        "src/*.cpp",
        "src/*.h*",
    ]) + [":platform_hpp"],
    hdrs = ["include/zmq.h"],
    includes = ["include"],
    visibility = ["//visibility:public"],
)

genrule(
    name = "platform_hpp",
    srcs = ["builds/cmake/platform.hpp.in"],
    outs = ["platform.hpp"],
    # TODO: These are hard-coded for reasonable values when compiling on linux, but may not work
    # on other platforms. calculate these dynamically like zmq's cmake build would.
    cmd = """
        cp $< $@
        sed -i -e 's/#cmakedefine ZMQ_USE_KQUEUE/\/\* #undef ZMQ_USE_KQUEUE \*\//g' $@
        sed -i -e 's/#cmakedefine ZMQ_USE_EPOLL/#define ZMQ_USE_EPOLL/g' $@
        sed -i -e 's/#cmakedefine ZMQ_USE_EPOLL_CLOEXEC/#define ZMQ_USE_EPOLL_CLOEXEC/g' $@
        sed -i -e 's/#cmakedefine ZMQ_USE_DEVPOLL/\/\* #undef ZMQ_USE_DEVPOLL \*\//g' $@
        sed -i -e 's/#cmakedefine ZMQ_USE_POLL/\/\* #undef ZMQ_USE_POLL \*\//g' $@
        sed -i -e 's/#cmakedefine ZMQ_USE_SELECT/\/\* #undef ZMQ_USE_SELECT \*\//g' $@

        sed -i -e 's/#cmakedefine ZMQ_FORCE_MUTEXES/\/\* #undef ZMQ_FORCE_MUTEXES \*\//g' $@

        sed -i -e 's/#cmakedefine HAVE_FORK/#define HAVE_FORK/g' $@
        sed -i -e 's/#cmakedefine HAVE_CLOCK_GETTIME/#define HAVE_CLOCK_GETTIME/g' $@
        sed -i -e 's/#cmakedefine HAVE_GETHRTIME/\/\* #undef HAVE_GETHRTIME \*\//g' $@
        sed -i -e 's/#cmakedefine HAVE_MKDTEMP/#define HAVEMKDTEMP/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_UIO/#define ZMQ_HAVE_UIO/g' $@

        sed -i -e 's/#cmakedefine ZMQ_HAVE_EVENTFD/#define ZMQ_HAVE_EVENTFD/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_EVENTFD_CLOEXEC/#define ZMQ_HAVE_EVENTFD_CLOEXEC/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_IFADDRS/#define ZMQ_HAVE_IFADDRS/g' $@

        sed -i -e 's/#cmakedefine ZMQ_HAVE_SO_PEERCRED/#define ZMQ_HAVE_SO_PEERCRED/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_LOCAL_PEERCRED/\/\* #undef ZMQ_HAVE_LOCAL_PEERCRED \*\//g' $@

        sed -i -e 's/#cmakedefine ZMQ_HAVE_SOCK_CLOEXEC/#define ZMQ_HAVE_SOCK_CLOEXEC/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_SO_KEEPALIVE/#define ZMQ_HAVE_SO_KEEPALIVE/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_TCP_KEEPCNT/#define ZMQ_HAVE_TCP_KEEPCNT/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_TCP_KEEPIDLE/#define ZMQ_HAVE_TCP_KEEPIDLE/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_TCP_KEEPINTVL/#define ZMQ_HAVE_TCP_KEEPINTVL/g' $@
        sed -i -e 's/#cmakedefine ZMQ_HAVE_TCP_KEEPALIVE/\/\* #undef ZMQ_HAVE_TCP_KEEPALIVE \*\//g' $@

        sed -i -e 's/#cmakedefine ZMQ_HAVE_OPENPGM/\/\* #undef ZMQ_HAVE_OPENPGM \*\//g' $@
        sed -i -e 's/#cmakedefine ZMQ_MAKE_VALGRIND_HAPPY/\/\* #undef ZMQ_MAKE_VALGRIND_HAPPY \*\//g' $@

        sed -i -e 's/#cmakedefine ZMQ_HAVE_CURVE/#define ZMQ_HAVE_CURVE/g' $@
        sed -i -e 's/#cmakedefine ZMQ_USE_TWEETNACL/#define ZMQ_USE_TWEETNACL/g' $@
        sed -i -e 's/#cmakedefine HAVE_LIBSODIUM/\/\* #undef HAVE_LIBSODIUM \*\//g' $@

        sed -i -e 's/#cmakedefine ZMQ_HAVE_WINDOWS/\/\* #undef HAVE_WINDOWS \*\//g' $@
    """,
    visibility = ["//visibility:public"],
)