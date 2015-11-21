#ifndef LIBS
#define LIBS

#include <string>
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ostream>
#include <vector>
#include <fstream>
#include <cstdlib>

#define DEBUG 0

#if DEBUG == 1
	#define V_OUT(x) std::cout << #x << " = " << x << std::endl
#else 
	#define V_OUT(x)
#endif

#endif