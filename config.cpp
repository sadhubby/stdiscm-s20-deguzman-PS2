#include "config.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

Config loadConfig(const string &fileName) {
  ifstream file(fileName);
  if (!file.is_open()) {
    cerr << "Could not open" << fileName << "\n";
    exit(1);
  }
}
