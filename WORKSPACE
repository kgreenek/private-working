# ------------------------------------------------------------------------------
http_archive(
    name = "com_google_protobuf",
    urls = ["https://github.com/google/protobuf/archive/v3.3.0.tar.gz"],
    sha256 = "94c414775f275d876e5e0e4a276527d155ab2d0da45eed6b7734301c330be36e",
    strip_prefix = "protobuf-3.3.0",
)

http_archive(
    name = "com_google_protobuf_cc",
    urls = ["https://github.com/google/protobuf/archive/v3.3.0.tar.gz"],
    sha256 = "94c414775f275d876e5e0e4a276527d155ab2d0da45eed6b7734301c330be36e",
    strip_prefix = "protobuf-3.3.0",
)

http_archive(
    name = "com_google_protobuf_java",
    urls = ["https://github.com/google/protobuf/archive/v3.3.0.tar.gz"],
    sha256 = "94c414775f275d876e5e0e4a276527d155ab2d0da45eed6b7734301c330be36e",
    strip_prefix = "protobuf-3.3.0",
)

# ------------------------------------------------------------------------------
new_http_archive(
    name = "ign_transport_archive",
    # IMPORTANT: If you change this version, be sure to update the config_hh target
    # in ign_transport.BUILD to match.
    urls = ["https://bitbucket.org/ignitionrobotics/ign-transport/get/ignition-transport3_3.0.1.tar.gz"],
    sha256 = "bcc9d7ad640d9ad3a38f8186b48408eef8195d4a04d768e0a5769b7f501d10ca",
    strip_prefix = "ignitionrobotics-ign-transport-43199f9158dc",
    build_file = "//third_party:ign_transport.BUILD",
)

bind(
    name = "ign_transport",
    actual = "@ign_transport_archive//:ign_transport",
)

# Needed by ign_transport_archive.
new_http_archive(
    name = "ign_msgs_archive",
    # IMPORTANT: If you change this version, be sure to update the config_hh target
    # in ign_msgs.BUILD to match.
    urls = ["https://bitbucket.org/ignitionrobotics/ign-msgs/get/ignition-msgs_0.7.0.tar.gz"],
    sha256 = "a3bd439c15df1dbde7f9e8c6fb272c7bfb2dcd34059d6b672f6805918e455e72",
    strip_prefix = "ignitionrobotics-ign-msgs-b5ed20ac644a",
    build_file = "//third_party:ign_msgs.BUILD",
)

bind(
    name = "ign_msgs_all_cc_proto",
    actual = "@ign_msgs_archive//:all_cc_proto",
)

bind(
    name = "ign_msgs",
    actual = "@ign_msgs_archive//:ign_msgs",
)

# Needed by ign_msgs_archive.
new_http_archive(
    name = "ign_math_archive",
    # IMPORTANT: If you change this version, be sure to update the config_hh target
    # in ign_math.BUILD to match.
    urls = ["https://bitbucket.org/ignitionrobotics/ign-math/get/ignition-math3_3.1.0.tar.gz"],
    sha256 = "4eeba0fda452a81b79a623ae98c71fb0a6d6304e0e5e658922f5ca7eb65e9db5",
    strip_prefix = "ignitionrobotics-ign-math-000921c8ee49",
    build_file = "//third_party:ign_math.BUILD",
)

bind(
    name = "ign_math",
    actual = "@ign_math_archive//:ign_math",
)

new_http_archive(
    name = "zmq_archive",
    urls = ["https://github.com/zeromq/libzmq/archive/v4.2.2.tar.gz"],
    sha256 = "ea5eecbb9cc231a750535a7b74f887b18656014cc92601e8ab34734db799b796",
    strip_prefix = "libzmq-4.2.2",
    build_file = "//third_party:zmq.BUILD",
)

bind(
    name = "zmq",
    actual = "@zmq_archive//:zmq",
)
