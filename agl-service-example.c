#define AFB_BINDING_VERSION 2

#include <afb/afb-binding.h>

void hello(afb_req req) {
    AFB_REQ_DEBUG(req, "hello agl service");
    afb_req_success(req, NULL, "hello agl service");
}

const afb_verb_v2 verbs[] = {
    { .verb = "hello", .callback = hello },
    { NULL}
};

const afb_binding_v2 afbBindingV2 = {
    .api = "agl-service-example",
    .verbs = verbs
};
