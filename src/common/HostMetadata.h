/*
 * This file is part of avif-format, an AV1 Image (AVIF) file format
 * plug-in for Adobe Photoshop(R).
 *
 * Copyright (c) 2021 Nicholas Hayes
 *
 * avif-format is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * avif-format is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with avif-format.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef HOSTMETADATA_H
#define HOSTMETADATA_H

#include "AvifFormat.h"
#include "ScopedHandleSuite.h"

ScopedHandleSuiteHandle GetExifMetadata(const FormatRecordPtr formatRecord);
ScopedHandleSuiteHandle GetXmpMetadata(const FormatRecordPtr formatRecord);

bool HasColorProfileMetadata(const FormatRecordPtr formatRecord);
bool HasExifMetadata(const FormatRecordPtr formatRecord);
bool HasXmpMetadata(const FormatRecordPtr formatRecord);

#endif // !HOSTMETADATA_H
