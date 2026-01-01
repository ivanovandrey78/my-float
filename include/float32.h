#pragma once

#include <cstring>
#include <fstream>
#include <string>

class float32_t final {
private:
    char data_[4];

public: 
    // Constructors
    float32_t() = default;
    float32_t(const char* data);
    float32_t(int data);
    float32_t(const std::string& data);

    float32_t(const float32_t& other);
    float32_t& operator=(const float32_t& other);

    float32_t(float32_t&& other) noexcept;
    float32_t& operator=(float32_t&& other);

    // Destructor
    ~float32_t() = default;

    // Operators
    float32_t operator+(float32_t& other);
    float32_t operator-(float32_t& other);
    float32_t operator*(float32_t& other);
    float32_t operator/(float32_t& other);
    bool operator==(float32_t& other);

    friend std::ostream& operator<<(std::ostream& os, const float32_t& num);
    friend float32_t& operator>>(std::istream& is, float32_t& num);
};