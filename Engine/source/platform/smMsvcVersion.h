//-----------------------------------------------------------------------------
// Copyright (c) 2025-2099 SmTech3D contributors
//
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to
// deal in the Software without restriction, including without limitation the
// rights to use, copy, modify, merge, publish, distribute, sublicense, and/or
// sell copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
//
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
//
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
// FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
// IN THE SOFTWARE.
//-----------------------------------------------------------------------------

#pragma once

// Only for Microsoft Visual C++
#if !defined(_MSC_VER)
    #error "This header is intended for MSVC only. Other compilers not handled here."
#endif

// Enforce minimum compiler: Visual Studio 2019 (MSVC 16.0+, _MSC_VER >= 1920)
#if _MSC_VER < 1920
    #error "SmTech3D requires Visual Studio 2019 or newer. Your compiler is too old. Go upgrade, sir."
#endif

#if _MSC_VER >= 1930
// MSVC 17.0+ (Visual Studio 2022)
#   define SMTECH_MSVC_VER_2022
#elif _MSC_VER >= 1920
// MSVC 16.0 (Visual Studio 2019)
#   define SMTECH_MSVC_VER_2019
#endif