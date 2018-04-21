/*
# natives.cpp

This source file contains the bridge between natives and implementations. I
prefer to keep the actual implementation separate. The implementation contains
no instances of `cell` or `AMX*` and is purely C++ and external library code.
The code here acts as the translation between AMX data types and native types.
*/

#include "natives.hpp"
#include "plugin-natives/NativeFunc.hpp"

// when plugin-natives gets fixed for GCC:
// remove the "cell(AMX*, cell*)" function headers
cell Natives::Function(AMX* amx, cell* params)
// and replace them with these macros - keep in mind these macros support
// automatic parameter casting so you can remove that from your own code.
// PAWN_NATIVE_DEFN(projectname, Function, int())
{
    logprintf("Function called");
    return 1;
}
