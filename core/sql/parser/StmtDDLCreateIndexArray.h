/**********************************************************************
// @@@ START COPYRIGHT @@@
//
// (C) Copyright 1996-2014 Hewlett-Packard Development Company, L.P.
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
**********************************************************************/
#ifndef STMTDDLCREATEINDEXARRAY_H
#define STMTDDLCREATEINDEXARRAY_H
/* -*-C++-*-
 *****************************************************************************
 *
 * File:         StmtDDLCreateIndexArray.h
 * Description:  class for an array of pointers pointing to instances of
 *               class StmtDDLCreateIndex
 *               
 *               
 * Created:      1/11/96
 * Language:     C++
 *
 *
 *
 *
 *****************************************************************************
 */


#include "Collections.h"
#include "StmtDDLCreateIndex.h"
#ifndef   SQLPARSERGLOBALS_CONTEXT_AND_DIAGS
#define   SQLPARSERGLOBALS_CONTEXT_AND_DIAGS
#endif
#include "SqlParserGlobals.h"

// -----------------------------------------------------------------------
// contents of this file
// -----------------------------------------------------------------------
class StmtDDLCreateIndexArray;

// -----------------------------------------------------------------------
// forward references
// -----------------------------------------------------------------------
// None.

// -----------------------------------------------------------------------
// Definition of class StmtDDLCreateIndexArray
// -----------------------------------------------------------------------
class StmtDDLCreateIndexArray : public LIST(StmtDDLCreateIndex *)
{

public:

  // constructor
  StmtDDLCreateIndexArray(CollHeap *heap = PARSERHEAP())
   : LIST(StmtDDLCreateIndex *)(heap)
  { }

  // virtual destructor
  virtual ~StmtDDLCreateIndexArray();

private:

}; // class StmtDDLCreateIndexArray

#endif // STMTDDLCREATEINDEXARRAY_H
