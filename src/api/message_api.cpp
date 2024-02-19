#include "message_api.h"
#include "message/message.h"

void api::print_hello() {
    message::print_message("Hello!");
}

void api::print_bye() {
    message::print_message("Bye Everyone!");
}