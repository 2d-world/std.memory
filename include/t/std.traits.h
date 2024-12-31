#pragma once

#include "t.h"

#if _WIN32
#define DLLEXPORT __declspec(dllexport)
#else
#define DLLEXPORT
#endif

DLLEXPORT err_t plugin(T context, TMap_search search);
