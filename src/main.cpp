#include <bn_core.h>
#include <bn_log.h>
#include <bn_string.h>

#include "base_conv.h"

int main() {
    bn::core::init();

    BN_LOG("Hey!");

    while(true) {
        bn::core::update();
    }
}