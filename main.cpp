#include "config.h"
#include <chrono>
#include <ctime>
#include <iomanip>
#include <iostream>
#include <mutex>
#include <thread>
#include <vector>

using namespace std;

int main() {

  Config cfg = loadConfig();

  cout << "\n --- Configuration Loaded --- \n";
  cout << "Max dungeons (n): " << cfg.n << "\n";
  cout << "Tanks (t): " << cfg.t << "\n";
  cout << "Healers (h): " << cfg.h << "\n";
  cout << "DPS (d): " << cfg.d << "\n";
  cout << "Min clear time (t1): " << cfg.t1 << "\n";
  cout << "Max clear time (t2): " << cfg.t2 << "\n";
  cout << "------------------------------\n";

  return 0;
}
