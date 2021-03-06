// @@@ START COPYRIGHT @@@
//
// (C) Copyright 2006-2014 Hewlett-Packard Development Company, L.P.
//
//  Licensed under the Apache License, Version 2.0 (the "License");
//  you may not use this file except in compliance with the License.
//  You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
//  Unless required by applicable law or agreed to in writing, software
//  distributed under the License is distributed on an "AS IS" BASIS,
//  WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
//  See the License for the specific language governing permissions and
//  limitations under the License.
//
// @@@ END COPYRIGHT @@@

#include <sys/types.h>
#include <stdlib.h>
#include <string.h>

#include "seabed/ms.h"
//#include "tmtx.h"
//#include "seabed/trace.h"
//#include "tmlogging.h"
//#include "tminfo.h"
#include "tmdeque.h"
#include "tmtimer.h"
#include "tmpool.h"
//#include "tminfo.h"

//----------------------------------------------------------------------------
// CTmPoolElement methods
// These are just temporary to make sure we're calling the derived functions
//----------------------------------------------------------------------------
CTmPoolElement * CTmPoolElement::constructPoolElement(int64)
{
   //TMTrace(1, ("CTmPoolElement::constructPoolElement PROGRAMMING ERROR, called directly!\n"));
   abort();
}

int64 CTmPoolElement::cleanPoolElement()
{
   //TMTrace(1, ("CTmPoolElement::cleanPoolElement PROGRAMMING ERROR, called directly!\n"));
   abort();
}

