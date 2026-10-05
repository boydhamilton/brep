
#pragma once

#include <bits/stdc++.h>
#include <regex>

class RegexHandler {

public:
  explicit RegexHandler(const std::string &pattern) : r_(pattern) {}

  inline bool RegexMatches(const std::string &path_str) const {
    return std::regex_match(path_str, r_);
  }

private:
  std::regex r_;
};