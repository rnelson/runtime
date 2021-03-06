// Licensed to the .NET Foundation under one or more agreements.
// The .NET Foundation licenses this file to you under the MIT license.
// See the LICENSE file in the project root for more information.

/*****************************************************************************/

#include "jitpch.h"
#ifdef _MSC_VER
#pragma hdrstop
#endif

#if defined(TARGET_X86)

#include "target.h"

const char*            Target::g_tgtCPUName  = "x86";
const Target::ArgOrder Target::g_tgtArgOrder = ARG_ORDER_L2R;

#endif // TARGET_X86
