#pragma once
#include <Support.hpp>
#include <sup/termcolor.hpp>

namespace mini::io {
    namespace tclr = termcolor;

    // TODO: WIPWIPWIPWIP
    class Stdout {
        // Formatting engine used by I/O ops.
        template <typename... Args>
        std::string format(std::string_view fmt_str, Args&&... args) {
            return std::vformat(fmt_str, std::make_format_args(args...));
        }

        template <typename... Args>
        void raw(std::string_view fmt_str, Args&&... args) {
            std::cout << format(fmt_str, args...);
        }

        template<typename... Args>
        void log(const std::string s_system = "Main", const std::string s_msg, Args&&... args) {
            std::cout << format("LOG: [{}]-> ");
        }
    };
}
