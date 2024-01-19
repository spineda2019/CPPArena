#include "arena.hpp"

#include <optional>
#include <vector>

Arena::Arena(std::size_t arena_size)
    : capacity_(arena_size),
      arena_location_(0),
      arena_memory_(std::vector<unsigned char>(arena_size)) {}

Arena::~Arena(){}

std::optional<void*> Arena::aralloc(std::size_t requested_bytes) {
    if (this->arena_location_ + requested_bytes <= this->capacity_) {
        void* pointer = &this->arena_memory_[this->arena_location_];
        this->arena_location_ += requested_bytes;
        return pointer;
    } else {
        return {};
    }
}