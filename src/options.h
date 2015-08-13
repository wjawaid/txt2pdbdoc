/*
**      txt2pdbdoc -- Text to Doc converter for Palm Pilots
**      options.h
**
**      Copyright (C) 1998-2015  Paul J. Lucas
**
**      This program is free software; you can redistribute it and/or modify
**      it under the terms of the GNU General Public License as published by
**      the Free Software Foundation; either version 2 of the License, or
**      (at your option) any later version.
** 
**      This program is distributed in the hope that it will be useful,
**      but WITHOUT ANY WARRANTY; without even the implied warranty of
**      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
**      GNU General Public License for more details.
** 
**      You should have received a copy of the GNU General Public License
**      along with this program; if not, write to the Free Software
**      Foundation, Inc., 675 Mass Ave, Cambridge, MA 02139, USA.
*/

#ifndef txt2pdbdoc_options_H
#define txt2pdbdoc_options_H

// local
#include "util.h"

////////// extern variables ///////////////////////////////////////////////////

extern char const* me;                  // executable name

extern bool opt_binary;
extern bool opt_compress;
extern bool opt_decode;
extern bool opt_no_check_doc;
extern bool opt_verbose;

////////// extern functions ///////////////////////////////////////////////////

void process_options( int argc, char *argv[] );

///////////////////////////////////////////////////////////////////////////////

#endif /* txt2pdbdoc_options_H */
/* vim:set et sw=2 ts=2: */