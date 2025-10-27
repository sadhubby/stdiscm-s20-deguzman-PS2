#ifndef CONFIG_H
#define CONFIG_H

#include <string>

struct Config {
  int n;
  int t;
  int h;
  int d;
  int t1;
  int t2;
};

Config loadConfig(const std::string &filename);
#endif
