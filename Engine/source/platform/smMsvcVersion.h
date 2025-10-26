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

#if defined(_MSC_VER)

    // MSVC 17.0+ (Visual Studio 2022)
    #if _MSC_VER >= 1930
        #define SM_MSVC_VER_2022
    // MSVC 16.0 (Visual Studio 2019)
    #elif _MSC_VER >= 1920
        #define SM_MSVC_VER_2019
    // MSVC 15.0 (Visual Studio 2017)
    #elif _MSC_VER >= 1910
        #define SM_MSVC_VER_2017
    // MSVC 14.0 (Visual Studio 2015)
    #elif _MSC_VER >= 1900
        #define SM_MSVC_VER_2015
    // MSVC 12.0 (Visual Studio 2013)
    #elif _MSC_VER >= 1800
        #define SM_MSVC_VER_2013
    // MSVC 11.0 (Visual Studio 2012)
    #elif _MSC_VER >= 1700
        #define SM_MSVC_VER_2012
    // MSVC 10.0 (Visual Studio 2010)
    #elif _MSC_VER >= 1600
        #define SM_MSVC_VER_2010
    // MSVC 9.0 (Visual Studio 2008)
    #elif _MSC_VER >= 1500
        #define SM_MSVC_VER_2008
    // MSVC 8.0 (Visual Studio 2005)
    #elif _MSC_VER >= 1400
        #define SM_MSVC_VER_2005
    // MSVC 7.1 (Visual Studio 2003)
    #elif _MSC_VER >= 1310
        #define SM_MSVC_VER_2003
    // MSVC 7.0 (Visual Studio .NET 2002)
    #elif _MSC_VER >= 1300
        #define SM_MSVC_VER_2002
    // MSVC 6.0 (Visual Studio 6.0, 1998)
    #elif _MSC_VER >= 1200
        #define SM_MSVC_VER_1998
    // MSVC 5.0 (1997)
    #elif _MSC_VER >= 1100
        #define SM_MSVC_VER_1997
    // MSVC 4.2 (1996)
    #elif _MSC_VER >= 1020
        #define SM_MSVC_VER_1996
    // MSVC 4.0 (1995) — low limit "magic" _MSC_VER > 1000
    #elif _MSC_VER >= 1000
        #define SM_MSVC_VER_1995
    #endif

#endif // _MSC_VER