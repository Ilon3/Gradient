// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Library Files:
#pragma comment(lib, "ws2_32.lib")


// vehicle spawner options



// shitty auth

#include "LocalAuth.h"

//#include "File.h"
#include "WinHttpClient.h"
#include "sha256.h"
#include "LuxxAuth.h"
// Windows Header Files:

#include <windows.h>
#include <Mmsystem.h>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>
#include <iostream>
#include <map>
#include <set>
#include <unordered_map>
#include <algorithm>
#include <functional>
#include <memory>
#include <Psapi.h>
#include <MinHook.h>
#include <timeapi.h>
#include <time.h>
#include <shellapi.h>
#include <typeinfo>
#include <wincrypt.h>
#include <cstring>
#include <fstream>
#include <winsock2.h>
#include <iphlpapi.h>
#include <stdio.h>
#include <stdlib.h>
#include <filesystem>
#include <clocale>
#include <cstdlib>
#include <iostream>
#include <sstream>
#include <iterator>
#include <numeric>

#pragma comment(lib, "winmm.lib")
// Additional Header Files:
#include "Log.h"
#include "Memory.h"
#include "types.h"
#include "enums.h"
#include "InputHook.h"
#include "keyboard.h"
#include "CrossMapping.h"
#include "NativeInvoker.h"
#include "nativeCaller.h"
#include "natives2.h"
#include "Hooking.h"
#include "Structs.h"
#include "Functions.h"
#include "script.h"
//#include "menuVariables.h"
#include "ranks.h"

class globalHandle
{
private:
	void* _handle;

public:
	globalHandle(int index)
		: _handle(&Hooking::getGlobalPtr()[index >> 18 & 0x3F][index & 0x3FFFF])
	{ }

	globalHandle(void* p)
		: _handle(p)
	{ }

	globalHandle(const globalHandle& copy)
		: _handle(copy._handle)
	{ }

	globalHandle At(int index)
	{
		return globalHandle(reinterpret_cast<void**>(this->_handle) + (index));
	}

	globalHandle At(int index, int size)
	{
		// Position 0 = Array Size
		return this->At(1 + (index * size));
	}

	template <typename T>
	T* Get()
	{
		return reinterpret_cast<T*>(this->_handle);
	}

	template <typename T>
	T& As()
	{
		return *this->Get<T>();
	}
};


#pragma once
//using namespace std;


