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

/* Auto-generated by genmsg_cpp from file estimator_innovations.msg */


#include <inttypes.h>
#include <px4_platform_common/log.h>
#include <px4_platform_common/defines.h>
#include <uORB/topics/estimator_innovations.h>
#include <uORB/topics/uORBTopics.hpp>
#include <drivers/drv_hrt.h>
#include <lib/drivers/device/Device.hpp>

constexpr char __orb_estimator_innovations_fields[] = "uint64_t timestamp;float[2] gps_hvel;float gps_vvel;float[2] gps_hpos;float gps_vpos;float[2] ev_hvel;float ev_vvel;float[2] ev_hpos;float ev_vpos;float[2] fake_hvel;float fake_vvel;float[2] fake_hpos;float fake_vpos;float rng_vpos;float baro_vpos;float[2] aux_hvel;float aux_vvel;float[2] flow;float heading;float[3] mag_field;float[2] drag;float airspeed;float beta;float hagl;";

ORB_DEFINE(estimator_innovations, struct estimator_innovations_s, 144, __orb_estimator_innovations_fields, static_cast<uint8_t>(ORB_ID::estimator_innovations));
ORB_DEFINE(estimator_innovation_variances, struct estimator_innovations_s, 144, __orb_estimator_innovations_fields, static_cast<uint8_t>(ORB_ID::estimator_innovation_variances));
ORB_DEFINE(estimator_innovation_test_ratios, struct estimator_innovations_s, 144, __orb_estimator_innovations_fields, static_cast<uint8_t>(ORB_ID::estimator_innovation_test_ratios));


void print_message(const estimator_innovations_s &message)
{

	PX4_INFO_RAW(" estimator_innovations_s\n");

	const hrt_abstime now = hrt_absolute_time();

	if (message.timestamp != 0) {
		PX4_INFO_RAW("\ttimestamp: %" PRIu64 "  (%.6f seconds ago)\n", message.timestamp, (now - message.timestamp) / 1e6);
	} else {
		PX4_INFO_RAW("\n");
	}
	PX4_INFO_RAW("\tgps_hvel: [%.4f, %.4f]\n", (double)message.gps_hvel[0], (double)message.gps_hvel[1]);
	PX4_INFO_RAW("\tgps_vvel: %.4f\n", (double)message.gps_vvel);
	PX4_INFO_RAW("\tgps_hpos: [%.4f, %.4f]\n", (double)message.gps_hpos[0], (double)message.gps_hpos[1]);
	PX4_INFO_RAW("\tgps_vpos: %.4f\n", (double)message.gps_vpos);
	PX4_INFO_RAW("\tev_hvel: [%.4f, %.4f]\n", (double)message.ev_hvel[0], (double)message.ev_hvel[1]);
	PX4_INFO_RAW("\tev_vvel: %.4f\n", (double)message.ev_vvel);
	PX4_INFO_RAW("\tev_hpos: [%.4f, %.4f]\n", (double)message.ev_hpos[0], (double)message.ev_hpos[1]);
	PX4_INFO_RAW("\tev_vpos: %.4f\n", (double)message.ev_vpos);
	PX4_INFO_RAW("\tfake_hvel: [%.4f, %.4f]\n", (double)message.fake_hvel[0], (double)message.fake_hvel[1]);
	PX4_INFO_RAW("\tfake_vvel: %.4f\n", (double)message.fake_vvel);
	PX4_INFO_RAW("\tfake_hpos: [%.4f, %.4f]\n", (double)message.fake_hpos[0], (double)message.fake_hpos[1]);
	PX4_INFO_RAW("\tfake_vpos: %.4f\n", (double)message.fake_vpos);
	PX4_INFO_RAW("\trng_vpos: %.4f\n", (double)message.rng_vpos);
	PX4_INFO_RAW("\tbaro_vpos: %.4f\n", (double)message.baro_vpos);
	PX4_INFO_RAW("\taux_hvel: [%.4f, %.4f]\n", (double)message.aux_hvel[0], (double)message.aux_hvel[1]);
	PX4_INFO_RAW("\taux_vvel: %.4f\n", (double)message.aux_vvel);
	PX4_INFO_RAW("\tflow: [%.4f, %.4f]\n", (double)message.flow[0], (double)message.flow[1]);
	PX4_INFO_RAW("\theading: %.4f\n", (double)message.heading);
	PX4_INFO_RAW("\tmag_field: [%.4f, %.4f, %.4f]\n", (double)message.mag_field[0], (double)message.mag_field[1], (double)message.mag_field[2]);
	PX4_INFO_RAW("\tdrag: [%.4f, %.4f]\n", (double)message.drag[0], (double)message.drag[1]);
	PX4_INFO_RAW("\tairspeed: %.4f\n", (double)message.airspeed);
	PX4_INFO_RAW("\tbeta: %.4f\n", (double)message.beta);
	PX4_INFO_RAW("\thagl: %.4f\n", (double)message.hagl);

}
