
#pragma once

#include <bits/stdc++.h>
namespace fs = std::filesystem;

class FSHandler {

public:
  inline std::vector<fs::directory_entry>
  SearchPathRecursive(const fs::directory_entry& path) {

    std::vector<fs::directory_entry> r;
    for (const auto& entry : fs::recursive_directory_iterator(path)) {
      r.push_back(entry);
    }

    return r;
  }
};