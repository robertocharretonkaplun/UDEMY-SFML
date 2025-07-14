#pragma once
// Librerias STD
#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <thread>
#include <map>
#include <fstream> 
#include <unordered_map>

// Third Parties
#include <SFML/Graphics.hpp>

// IMGUI

// ENUMS & Structs


// MACROS
#define SAFE_PTR_RELEASE(x) if(x != nullptr) { delete x; x = nullptr; }

#define MESSAGE(classObj, method, state)                      \
{                                                             \
    std::ostringstream os_;                                   \
    os_ << classObj << "::" << method << " : "                \
        << "[CREATION OF RESOURCE" << ": " << state "] \n";\
    std::cerr << os_.str();                                   \
}

#define ERROR(classObj, method, errorMSG)                         \
{                                                                 \
    std::ostringstream os_;                                       \
    os_ << "ERROR : " << classObj << "::" << method << " : "      \
        << "  Error in data from params [" << errorMSG"] \n"; \
    std::cerr << os_.str();                                       \
    exit(1);                                                      \
}