/* acai_client_types.h
 *
 * This file is part of the ACAI library.
 *
 * Copyright (C) 2018  Andrew C. Starritt
 *
 * This ACAI library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This ACAI library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with the ACAI library.  If not, see <http://www.gnu.org/licenses/>.
 *
 * Contact details:
 * starritt@netspace.net.au
 * PO Box 3118, Prahran East, Victoria 3181, Australia.
 *
 */

#ifndef ACAI__VERSION_H
#define ACAI__VERSION_H

#include <acai_client_types.h>

// Defines the major version number, this increments when there is a major paradigm shift.
//
#define ACAI_MAJOR              1

// Defines the minor version number, this increments when there is a non compatibile API change.
//
#define ACAI_MINOR              4

// Defines the patch version number, this increments for bug fixes and/or
// backward compatible API enhancements.
//
#define ACAI_PATCH              1

// Integer and string versions
//
// The integer version is (major << 16) + (minor << 8) + patch, and this macro
// is used to constuct an integer version number.
//
#define ACAI_INT_VERSION(major, minor, patch) (((major)<<16)|((minor)<<8)|(patch))

// ACAI_VERSION is the actual version of this version of ACAI.
// It can be used like this to perform version specific checking
// #if (ACAI_VERSION >= ACAI_INT_VERSION(1, 4, 1))
//
#define ACAI_VERSION            ACAI_INT_VERSION (ACAI_MAJOR, ACAI_MINOR, ACAI_PATCH)

// Allows artefacts to be convert to a string
//
#define ACAI_STRINGIFY_INNER(s) #s
#define ACAI_STRINGIFY(s)       ACAI_STRINGIFY_INNER(s)

// Define the string version of ACAI, e.g. "ACAI 1.2.10"
//
#define ACAI_VERSION_STRING     "ACAI " ACAI_STRINGIFY(ACAI_MAJOR) \
                                "."     ACAI_STRINGIFY(ACAI_MINOR) \
                                "."     ACAI_STRINGIFY(ACAI_PATCH)

namespace ACAI {
                                
/// Returns runtime integer version, as opposed to compile time header version.
///
ACAI_SHARED_FUNC int version ();

/// Returns runtime string version, as opposed to compile time header version.
///
ACAI_SHARED_FUNC ACAI::ClientString versionString ();

} // ACAI namespace

                               
                                
#endif // ACAI__VERSION_H
