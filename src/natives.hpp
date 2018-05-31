/*
# natives.hpp

Contains all the `PAWN_NATIVE_DECL` for native function declarations.
*/

#ifndef PROJECTNAME_NATIVES_H
#define PROJECTNAME_NATIVES_H

#include <string>

#include <amx/amx2.h>

#include "common.hpp"
#include "plugin-natives/NativeFunc.hpp" // must be included last

namespace Natives {
cell Function(AMX* amx, cell* params);
}

#endif
