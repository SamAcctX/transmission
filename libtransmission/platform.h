// This file Copyright © Mnemosyne LLC.
// It may be used under GPLv2 (SPDX: GPL-2.0-only), GPLv3 (SPDX: GPL-3.0-only),
// or any future license endorsed by Mnemosyne LLC.
// License text can be found in the licenses/ folder.

#pragma once

#ifndef __TRANSMISSION__
#error only libtransmission should #include this header.
#endif

#include <string>

struct tr_session;

/** @brief return the directory where the Web Client's web ui files are kept */
[[nodiscard]] std::string tr_getWebClientDir(tr_session const* session);

/** @brief return the directory where session id lock files are stored */
[[nodiscard]] std::string tr_getSessionIdDir();
