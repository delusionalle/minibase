#pragma once
#include <Support.hpp>

#include "Data.hpp"

namespace mini {
    enum ActionType {
        Read,
        Write,
    };

    // Represents single action with a given type and data.
    class Action {
    public:
        ActionType type;
        Data data;
    };
}
