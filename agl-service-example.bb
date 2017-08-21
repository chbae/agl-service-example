SUMMARY = "AGL Service Example"
LICENSE = "CLOSED" 

DEPENDS = "af-binder"

inherit cmake

SRCREV = "6cd3c867be6741eae4aa0ef6a5163b1852a30a9f"
SRC_URI = "git://github.com/chbae/agl-service-example"
S = "${WORKDIR}/git"

FILES_SOLIBSDEV = ""
FILES_${PN} = "${libdir}/lib*.so"
