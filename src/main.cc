
#include "fshandler.hh"
#include "regexhandler.hh"
#include <stdexcept>

int main(int argc, char **argv) {

  if (argc < 3) {
    throw std::runtime_error(
        "Too few arguments, requires ./brep [root path] [regex]");
    return -1;
  }

  // capture arguments into strings so they're nice
  const std::string path = std::string(argv[1]);
  const std::string regex = std::string(argv[2]);

  FSHandler f;
  RegexHandler r(regex);

  std::vector<fs::directory_entry> paths =
      f.SearchPathRecursive(fs::directory_entry(path));
  for (const auto &p : paths) {
    if (r.RegexMatches(p.path().string())) {
      std::cout << p << std::endl;
    }
  }
}