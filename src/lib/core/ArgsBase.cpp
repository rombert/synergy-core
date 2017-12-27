/*
 * synergy -- mouse and keyboard sharing utility
 * Copyright (C) 2012-2016 Symless Ltd.
 * Copyright (C) 2012 Nick Bolton
 * 
 * This package is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * found in the file LICENSE that should have accompanied this file.
 * 
 * This package is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "core/ArgsBase.h"

ArgsBase::ArgsBase() :
#if SYSAPI_WIN32
m_debugServiceWait(false),
m_pauseOnExit(false),
m_stopOnDeskSwitch(false),
#endif
#if WINAPI_XWINDOWS
m_disableXInitThreads(false),
m_runAsUid(-1),
#endif
m_backend(false),
m_restartable(true),
m_noHooks(false),
m_pname(nullptr),
m_logFilter(nullptr),
m_logFile(nullptr),
m_display(nullptr),
m_enableDragDrop(false),
m_shouldExit(false),
m_profileDirectory(""),
m_pluginDirectory("")
{
}

ArgsBase::~ArgsBase()
= default;
