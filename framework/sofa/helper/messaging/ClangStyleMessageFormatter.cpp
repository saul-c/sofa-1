/******************************************************************************
*       SOFA, Simulation Open-Framework Architecture, version 1.0 RC 1        *
*                (c) 2006-2011 MGH, INRIA, USTL, UJF, CNRS                    *
*                                                                             *
* This library is free software; you can redistribute it and/or modify it     *
* under the terms of the GNU Lesser General Public License as published by    *
* the Free Software Foundation; either version 2.1 of the License, or (at     *
* your option) any later version.                                             *
*                                                                             *
* This library is distributed in the hope that it will be useful, but WITHOUT *
* ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or       *
* FITNESS FOR A PARTICULAR PURPOSE. See the GNU Lesser General Public License *
* for more details.                                                           *
*                                                                             *
* You should have received a copy of the GNU Lesser General Public License    *
* along with this library; if not, write to the Free Software Foundation,     *
* Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301 USA.          *
*******************************************************************************
*                               SOFA :: Modules                               *
*                                                                             *
* This component is open-source                                               *
*                                                                             *
* Authors: Bruno Carrez                                                       *
*                                                                             *
* Contact information: contact@sofa-framework.org                             *
******************************************************************************/
/*****************************************************************************
* User of this library should read the documentation
* in the messaging.h file.
******************************************************************************/

#include <sstream>
using std::ostringstream ;

#include <iostream>
using std::endl ;
using std::cout ;
using std::cerr ;

#include "ClangStyleMessageFormatter.h"


namespace sofa
{

namespace helper
{

namespace messaging
{

static ClangStyleMessageFormatter s_ClangStyleMessageFormatter;

MessageFormatter* ClangStyleMessageFormatter::getInstance()
{
    return &s_ClangStyleMessageFormatter;
}

void ClangStyleMessageFormatter::formatMessage(const Message& m,std::ostream& out)
{
    out << m.source() << ":" << m.lineno() << ":1: " << m.type() << ": " << m.message() << std::endl ;
    out << " message id: " << m.id() << std::endl ;
}


} // messaging
} // helper
} // sofa
