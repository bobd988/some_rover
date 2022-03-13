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

/* Auto-generated by genmsg_cpp from file gps_dump.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/gps_dump.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_gps_dump_fields[] = "uint64_t timestamp;uint8_t len;uint8_t[79] data;";

ORB_DEFINE(gps_dump, struct gps_dump_s, 88, __orb_gps_dump_fields, static_cast<uint8_t>(ORB_ID::gps_dump));


void print_message(const gps_dump_s &message)
{

	PX4_INFO_RAW(" gps_dump_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tlen: %u\n", message.len);
	PX4_INFO_RAW("\tdata: [%u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u, %u]\n", message.data[0], message.data[1], message.data[2], message.data[3], message.data[4], message.data[5], message.data[6], message.data[7], message.data[8], message.data[9], message.data[10], message.data[11], message.data[12], message.data[13], message.data[14], message.data[15], message.data[16], message.data[17], message.data[18], message.data[19], message.data[20], message.data[21], message.data[22], message.data[23], message.data[24], message.data[25], message.data[26], message.data[27], message.data[28], message.data[29], message.data[30], message.data[31], message.data[32], message.data[33], message.data[34], message.data[35], message.data[36], message.data[37], message.data[38], message.data[39], message.data[40], message.data[41], message.data[42], message.data[43], message.data[44], message.data[45], message.data[46], message.data[47], message.data[48], message.data[49], message.data[50], message.data[51], message.data[52], message.data[53], message.data[54], message.data[55], message.data[56], message.data[57], message.data[58], message.data[59], message.data[60], message.data[61], message.data[62], message.data[63], message.data[64], message.data[65], message.data[66], message.data[67], message.data[68], message.data[69], message.data[70], message.data[71], message.data[72], message.data[73], message.data[74], message.data[75], message.data[76], message.data[77], message.data[78]);

}
