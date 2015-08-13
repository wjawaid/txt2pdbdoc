/*
**      txt2pdbdoc -- Text to Doc converter for Palm Pilots
**      txt2pdbdoc.c
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

// local
#include "common.h"
#include "options.h"

// standard
#include <stdlib.h>                     /* for exit() */

extern void decode( char const*, char const* );
extern void encode( char const*, char const*, char const* );

///////////////////////////////////////////////////////////////////////////////

int main( int argc, char *argv[] ) {
  process_options( argc, argv );

  if ( opt_decode )
    decode( argv[0], argc == 2 ? argv[1] : 0 );
  else
    encode( argv[0], argv[1], argv[2] );

  exit( EXIT_SUCCESS );
}

///////////////////////////////////////////////////////////////////////////////
/* vim:set et sw=2 ts=2: */
