SUMMARY = "Eclipse paho go client library (new location at github.com)"
GO_SRCROOT = "github.com/eclipse/paho.mqtt.golang"
HOMEPAGE = "http://www.eclipse.org/paho/clients/golang/"
LICENSE = "EPL-1.0"
LIC_FILES_CHKSUM = "file://${GO_SRCROOT}/LICENSE;md5=3e75bb9ec12a51993bd30e51011b4229"
SRC_URI = "git://${GO_SRCROOT}"
SRCREV = "${AUTOREV}"
PV="1.0+git${SRCPV}"

DEPENDS = "golang-x-net golang-pborman-uuid"

do_configure_prepend() {
    rm -rf ${S}/${GO_SRCROOT}/samples
}

inherit golang
