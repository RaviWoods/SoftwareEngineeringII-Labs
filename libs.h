#ifndef LIBS
#define LIBS

#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ostream>
#include <vector>
#include <sstream>
#include <fstream>
#include <cstdlib>

#define DEBUG 1

#if DEBUG == 1
	#define VOUT(x) std::cout << #x << " = " << x << std::endl
#else 
	#define VOUT(x)
#endif

#endif
