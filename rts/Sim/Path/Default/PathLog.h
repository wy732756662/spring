/* This file is part of the Spring engine (GPL v2 or later), see LICENSE.html */

#ifndef PATH_LOG_H
#define PATH_LOG_H

#define LOG_SECTION_PATH "Path"

// use the specific section for all LOG*() calls in this source file
#ifdef LOG_SECTION_CURRENT
	#undef LOG_SECTION_CURRENT
#endif
#define LOG_SECTION_CURRENT LOG_SECTION_PATH

#include "System/Log/ILog.h"

LOG_REGISTER_SECTION_GLOBAL(LOG_SECTION_PATH)

#endif // PATH_LOG_H
