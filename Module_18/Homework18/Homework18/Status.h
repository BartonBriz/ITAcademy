#pragma once
#include <string>
enum class Status { New, Processing, Shipped };

static std::string statusToString(Status status) {
    switch (status) {
    case Status::New: return "New";
    case Status::Processing: return "Processing";
    case Status::Shipped: return "Shipped";
    default: return "Unknown";
    }
}