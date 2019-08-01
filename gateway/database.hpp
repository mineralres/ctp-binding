//
// database.hpp
// ~~~~~~~~~~~~~~~~~~~~~~~~~
//
// Copyright (c) 2003-2019 mineralres
//
// Distributed under the Boost Software License, Version 1.0. (See accompanying
// file LICENSE_1_0.txt or copy at http://www.boost.org/LICENSE_1_0.txt)
//

#include <atomic>
#include <iostream>
#include "spdlog/spdlog.h"

namespace binding
{
class database
{
public:
    database() : session_count_(0)
    {
    }
    void incr_session_count()
    {
        session_count_++;
        spdlog::info("INCR current session count: {}", session_count());
    }

    void decr_session_count()
    {
        session_count_--;
        spdlog::info("DECR current session count: {}", session_count());
    }

    long session_count()
    {
        return session_count_.load();
    }

private:
    std::atomic_long session_count_;
};
} // namespace binding
