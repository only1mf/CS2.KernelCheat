#pragma once
#include <Windows.h>

#include "utils.h"
#include "constants.h"

#include <thread>

#include "../offsets.hpp"
#include "../client.dll.hpp"
#include "../buttons.hpp"

using namespace cs2_dumper;

int kmControllerEntry();

void initialize(HANDLE, DWORD);

void threadedBhop(HANDLE&, const uintptr_t&);