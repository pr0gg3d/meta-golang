SUMMARY = "Go programming language compiler"
DESCRIPTION = " The Go programming language is an open source project to make \
 programmers more productive. Go is expressive, concise, clean, and\
 efficient. Its concurrency mechanisms make it easy to write programs\
 that get the most out of multicore and networked machines, while its\
 novel type system enables flexible and modular program construction.\
 Go compiles quickly to machine code yet has the convenience of\
 garbage collection and the power of run-time reflection. It's a\
 fast, statically typed, compiled language that feels like a\
 dynamically typed, interpreted language.\
\
 This package provides an assembler, a compiler, and a linker for the\
 Go programming language. This is Google's implementation of the Go\
 tool chain.\
"
HOMEPAGE = " http://golang.org/"
LICENSE = "BSD"

inherit golang-osarchmap

SRC_URI = "http://golang.org/dl/go${PV}.src.tar.gz;name=main"
S = "${WORKDIR}/go"
B = "${S}"

INHIBIT_PACKAGE_DEBUG_SPLIT = "1"
