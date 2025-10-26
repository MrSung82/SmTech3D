//-----------------------------------------------------------------------------
// Copyright (c) 2012 GarageGames, LLC
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

#ifndef _TYPESGCC_H
#define _TYPESGCC_H


// For additional information on GCC predefined macros
// http://gcc.gnu.org/onlinedocs/gcc-3.0.2/cpp.html


//--------------------------------------
// Compiler Version
#define SMTECH_COMPILER_GCC (__GNUC__ * 10000 + __GNUC_MINOR__ * 100 + __GNUC_PATCHLEVEL__)


//--------------------------------------
// Identify the compiler string

#if defined(__MINGW32__)
#  define SMTECH_COMPILER_STRING "GCC (MinGW)"
#  define TORQUE_COMPILER_MINGW
#elif defined(__CYGWIN__)
#  error Cygwin is not supported
#else
#  define SMTECH_COMPILER_STRING "GCC "
#endif


//--------------------------------------
// Identify the Operating System
#if defined(_WIN64)
#  define SMTECH_OS_STRING "Win64"
#  define SMTECH_OS_WIN
#  define SMTECH_OS_WIN64

#elif defined(__WIN32__) || defined(_WIN32)
#  define SMTECH_OS_STRING "Win32"
#  define SMTECH_OS_WIN
#  define SMTECH_OS_WIN32
#  define TORQUE_SUPPORTS_NASM
#  define TORQUE_SUPPORTS_GCC_INLINE_X86_ASM

#elif defined(__linux__)
#  define SMTECH_OS_STRING "Linux"
#  define SMTECH_OS_LINUX

#elif defined(__APPLE__)
#  define SMTECH_OS_STRING "MacOS X"
#  define SMTECH_OS_MAC
#error MacOS is not supported for now, may be in future
#  if defined(i386)
// Disabling ASM on XCode for shared library build code relocation issues
// This could be reconfigured for static builds, though minimal impact
//#     define TORQUE_SUPPORTS_NASM
#  endif
#else 
#  error "GCC: Unsupported Operating System"
#endif



#endif // INCLUDED_TYPES_GCC_H

