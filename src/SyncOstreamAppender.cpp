/*
 * SyncOstreamAppender.cpp
 *
 * Copyright 2013, Aupeo GmbH. All rights reserved.
 *
 * See the COPYING file for the terms of usage and distribution.
 */

#include "PortabilityImpl.hh"
#ifdef LOG4CPP_HAVE_UNISTD_H
#    include <unistd.h>
#endif
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <log4cpp/SyncOstreamAppender.hh>

namespace log4cpp {

    SyncOstreamAppender::SyncOstreamAppender(const std::string& name, std::ostream* stream) :
        OstreamAppender(name, stream) {
    }

    SyncOstreamAppender::~SyncOstreamAppender() {
    }

    void SyncOstreamAppender::_append(const LoggingEvent& event) {
        (*_stream) << _getLayout().format(event);
        if (_stream->good()) {
        	(*_stream) << std::flush;
        }
    }
}
