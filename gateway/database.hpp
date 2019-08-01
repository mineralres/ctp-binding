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
        std::cout << "incr current session count: " << session_count_.load() << std::endl;
    }

    void decr_session_count()
    {
        session_count_--;
        std::cout << "decr current session count: " << session_count_.load() << std::endl;
    }

    long session_count()
    {
        return session_count_.load();
    }

private:
    std::atomic_long session_count_;
};
} // namespace binding
