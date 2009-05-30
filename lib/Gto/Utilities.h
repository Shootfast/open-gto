//**********************************************************************
// Copyright (c) 2003 Tweak Films
//
// This library is free software; you can redistribute it and/or
// modify it under the terms of the GNU Lesser General Public License
// as published by the Free Software Foundation; either version 2 of
// the License, or (at your option) any later version.
//
// This library is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// Lesser General Public License for more details.
//
// You should have received a copy of the GNU Lesser General Public
// License along with this library; if not, write to the Free Software
// Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
// USA
//

#ifndef __Gto__Utilities__h__
#define __Gto__Utilities__h__
#include <sys/types.h>
#include <Gto/Header.h>

namespace Gto {

struct TypeSpec
{
    DataType     type;
    unsigned int width;
    unsigned int size;
};

struct Number
{
    union
    {
        int     _int;
        double  _double;
    };

    DataType  type;
};


size_t dataSize(Gto::uint32);

const char* typeName(Gto::DataType);

bool isNumber(Gto::DataType);
Number asNumber(void*, Gto::DataType);

bool isGTOFile(const char*);

void swapWords(void *data, size_t size);
void swapShorts(void *data, size_t size);


} // Gto

#endif // __Gto__Utilities__h__
