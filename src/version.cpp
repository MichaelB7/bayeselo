////////////////////////////////////////////////////////////////////////////
//
// version.cpp
//
// CVersion class
//
// Remi Coulom
//
// May, 1997
//
////////////////////////////////////////////////////////////////////////////
#include "version.h"

#include "version_number.h"

const char CVersion::szVersion[] = VERSION;
const char CVersion::szCopyright[] = 
"version "VERSION", Copyright (C) 1997-2016 Remi Coulom and updated by Michael Byrne.\n"
"compiled "__DATE__" "__TIME__".\n"
"This program comes with ABSOLUTELY NO WARRANTY.\n"
"This is free software, and you are welcome to redistribute it\n"
"under the terms and conditions of the GNU General Public License.\n"
"See http://www.gnu.org/copyleft/gpl.html for details.\n\n"
"Undocumented Keyboard Shortcuts:\n"
"   rp = readpgn\n"
"   o  = offset\n"
"   r  = ratings\n"
"   d  = details\n"
"Enjoy!\n\n"
;


const char CVersion::szBinary[] = 
"version "VERSION".\n"
"Copyright 1997-2016 by Remi Coulom and updated by MichaelByrne. All Rights Reserved.\n"
"Permission is granted to freely use and distribute this program,\n"
"provided that no charge is made for it and it is distributed unmodified\n"
"This program comes with ABSOLUTELY NO WARRANTY.\n";
