/* $Id: CoinError.cpp 2083 2019-01-06 19:38:09Z unxusr $ */
// Copyright (C) 2005, International Business Machines
// Corporation and others.  All Rights Reserved.
// This code is licensed under the terms of the Eclipse Public License (EPL).

#include "CoinError.hpp"

bool CoinError::printErrors_ = false;

/** A function to block the popup windows that windows creates when the code
    crashes */
#ifdef HAVE_WINDOWS_H
#include <windows.h>
void WindowsErrorPopupBlocker()
{
  SetErrorMode(SEM_FAILCRITICALERRORS | SEM_NOGPFAULTERRORBOX);
}
#else
void WindowsErrorPopupBlocker()
{
}
#endif

/* vi: softtabstop=2 shiftwidth=2 expandtab tabstop=2
*/
