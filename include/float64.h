#pragma once

#include <cstring>
#include <fstream>
#include <string>

class float64_t final {
private:
  char data_[8];

public:
  // Constructors
  float64_t() = default;
  float64_t(const char* data);
  float64_t(int data);
  float64_t(const std::string& data);

  float64_t(const float64_t& other);
  float64_t& operator=(const float64_t& other);

  float64_t(float64_t&& other) noexcept;
  float64_t& operator=(float64_t&& other);

  // Destructor
  ~float64_t() = default;

  // Unary Operators
  float64_t operator+=(const float64_t& other);
  float64_t operator-=(const float64_t& other);
  float64_t operator*=(const float64_t& other);
  float64_t operator/=(const float64_t& other);

  // Operators
  float64_t operator+(float64_t& other);
  float64_t operator-(float64_t& other);
  float64_t operator*(float64_t& other);
  float64_t operator/(float64_t& other);
  bool operator==(float64_t& other);

  friend std::ostream& operator<<(std::ostream& os, const float64_t& num);
  friend float64_t& operator>>(std::istream& is, float64_t& num);
};
