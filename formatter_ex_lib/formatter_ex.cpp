#include "formatter_ex.h"

namespace formatter_ex {
    std::string format_ex(const std::string& message) {
        return "[" + formatter::format(message) + "]";
    }
}