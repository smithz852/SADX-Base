// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"

extern "C"
{
    __declspec(dllexport) void __cdecl Init(const char* path,
        const HelperFunctions& helperFunctions)
    {
        // Startup logic - runs once when the mod loads
    
        //Test Message
        //MessageBoxA(nullptr, "SADX-Base loaded!", "Sanity Check", MB_OK);
    }

    __declspec(dllexport) void __cdecl OnFrame()
    {
        // Runs every frame
        
        //Ulimited Rings
        *(uint16_t*)0x03B0F0E4 = 999;
    }

    __declspec(dllexport) ModInfo SADXModInfo = { ModLoaderVer };
}

