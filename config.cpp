#include "config.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

Config loadConfig(const string &fileName) {
  ifstream file(fileName);
  if (!file.is_open()) {
    cerr << "Could not open" << fileName << "\n";
    exit(1);
  }

  unordered_map<string, string> config;
  string line;
  while (getline(file, line)) {
    istringstream iss(line);
    string key, value;
    if (iss >> key >> value) {
      config[key] = value;
    }
  }
  file.close();

  Config cfg{};

  cfg.n = stoi(config.at("n"));
  cfg.t = stoi(config.at("t"));
  cfg.h = stoi(config.at("h"));
  cfg.d = stoi(config.at("t"));
  cfg.t1 = stoi(config.at("t1"));
  cfg.t2 = stoi(config.at("t2"));

  return cfg;
}
