/****************************************************************************
 *
 *   Copyright (C) 2013-2016 PX4 Development Team. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions
 * are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in
 *    the documentation and/or other materials provided with the
 *    distribution.
 * 3. Neither the name PX4 nor the names of its contributors may be
 *    used to endorse or promote products derived from this software
 *    without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING,
 * BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS
 * OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED
 * AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT
 * LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN
 * ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 ****************************************************************************/

/* Auto-generated by genmsg_cpp from file telemetry_status.msg */


#pragma once


#include <uORB/uORB.h>

#include <uORB/topics/telemetry_heartbeat.h>

#ifndef __cplusplus
#define TELEMETRY_STATUS_LINK_TYPE_GENERIC 0
#define TELEMETRY_STATUS_LINK_TYPE_UBIQUITY_BULLET 1
#define TELEMETRY_STATUS_LINK_TYPE_WIRE 2
#define TELEMETRY_STATUS_LINK_TYPE_USB 3
#define TELEMETRY_STATUS_LINK_TYPE_IRIDIUM 4

#endif


#ifdef __cplusplus
struct __EXPORT telemetry_status_s {
#else
struct telemetry_status_s {
#endif
	uint64_t timestamp;
	float data_rate;
	float rate_multiplier;
	float rate_rx;
	float rate_tx;
	float rate_txerr;
	uint8_t type;
	uint8_t mode;
	bool flow_control;
	bool forwarding;
	bool mavlink_v2;
	bool ftp;
	uint8_t streams;
	uint8_t _padding0[5]; // required for logger
	struct telemetry_heartbeat_s heartbeats[4];


#ifdef __cplusplus
	static constexpr uint8_t LINK_TYPE_GENERIC = 0;
	static constexpr uint8_t LINK_TYPE_UBIQUITY_BULLET = 1;
	static constexpr uint8_t LINK_TYPE_WIRE = 2;
	static constexpr uint8_t LINK_TYPE_USB = 3;
	static constexpr uint8_t LINK_TYPE_IRIDIUM = 4;

#endif
};

/* register this as object request broker structure */
ORB_DECLARE(telemetry_status);


#ifdef __cplusplus
void print_message(const telemetry_status_s& message);
#endif