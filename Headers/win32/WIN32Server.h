/* WIN32Server - Implements window handling for MSWindows

   Copyright (C) 2002 Free Software Foundation, Inc.

   Written by: Fred Kiefer <FredKiefer@gmx.de>
   Date: March 2002
   
   This file is part of the GNU Objective C User Interface Library.

   This library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Library General Public
   License as published by the Free Software Foundation; either
   version 2 of the License, or (at your option) any later version.
   
   This library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Library General Public License for more details.
   
   You should have received a copy of the GNU Library General Public
   License along with this library; if not, write to the Free
   Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111 USA.
*/

#ifndef _WIN32Server_h_INCLUDE
#define _WIN32Server_h_INCLUDE

#include <GNUstepGUI/GSDisplayServer.h>

#include <windows.h>

@interface WIN32Server : GSDisplayServer
{
  HINSTANCE hinstance;

  HWND currentFocus;
  HWND desiredFocus;
  HWND currentActive;

  struct {
    BOOL useWMTaskBar;
  } flags;
}
@end

typedef struct _win_intern {
  BOOL useHDC;
  HDC hdc; 
  HGDIOBJ old;
  MINMAXINFO minmax;
} WIN_INTERN;


#endif /* _WIN32Server_h_INCLUDE */
