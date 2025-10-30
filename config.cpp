#include "config.h"
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <unordered_map>

using namespace std;

Config loadConfig() {

  Config cfg{};
  cout << "Enter maximum number of concurrent instances (n): ";
  cin >> cfg.n;

  cout << "Enter number of tank players in the queue (t): ";
  cin >> cfg.t;

  cout << "Enter number of healer players in the queue (h): ";
  cin >> cfg.h;

  cout << "Enter number of DPS players in the queue (d): ";
  cin >> cfg.d;

  cout << "Enter minimum time before an instance is finished (t1): ";
  cin >> cfg.t1;

  cout << "Enter maximum time before an instance is finished (t2): ";
  cin >> cfg.t2;
  return cfg;
}
