#ifndef CPPARENA_INCLUDE_ARENA_HPP
#define CPPARENA_INCLUDE_ARENA_HPP

#include <cstddef>
#include <optional>
#include <vector>

class Arena {
   public:
    Arena(std::size_t arena_size);
    ~Arena();

    std::optional<void*> aralloc(std::size_t requested_bytes);

   private:
    std::vector<unsigned char> arena_memory_;
    std::size_t capacity_;
    std::size_t arena_location_;
};  // Arena

#endif  // CPPARENA_INCLUDE_ARENA_HPP
