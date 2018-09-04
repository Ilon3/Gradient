// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once
#define MAX_PLAYERS 32
#define MALLOC(x) HeapAlloc(GetProcessHeap(), 0, (x))
#define FREE(x) HeapFree(GetProcessHeap(), 0, (x))


#include "targetver.h"

#define WIN32_LEAN_AND_MEAN             // Exclude rarely-used stuff from Windows headers

// Windows Library Files:
#pragma comment(lib, "ws2_32.lib")
#pragma comment(lib, "Winmm.lib")

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
#include <Psapi.h>
#include <MinHook.h>
#include <timeapi.h>
#include <time.h>
//Me
#include<smmintrin.h>
#include<intrin.h>


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
#include "natives.h"
#include "Hooking.h"
#include "Structs.h"
#include "script.h"
#include "Auth\Networking\sha512.hh"
#include "Auth\Networking\Web2.0.h"

// Menu Files:
#include"MenuBase.h"
#include"Menufunc.h"
#include "Argo.h"
#include "Online.h"
#include "Vehicle.h"


#include <locale>
#include <codecvt>
#include <stdio.h>



typedef struct
{
	float x, y;
} vector2;

typedef struct
{
	float x, y, w, h;
} vector4;


