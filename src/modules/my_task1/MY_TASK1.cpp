/****************************************************************************
 *
 *   Copyright (c) 2018 PX4 Development Team. All rights reserved.
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
#define DEBUG_BUILD	// stop and restart task (if enabled by default) to see debug output
#include "MY_TASK1.h"


using namespace device;

void MY_TASK1::publishMocapOdometry()
{
	_pub_mocap_odom.get().timestamp_sample = _timeStamp;

	Tag::corr_pkg_t pos = _ret.getposition(true);
	_pub_mocap_odom.get().position[0] = pos.x;
	_pub_mocap_odom.get().position[1] = pos.y;
	_pub_mocap_odom.get().position[2] = pos.z;

	_pub_mocap_odom.get().timestamp = hrt_absolute_time();
	_pub_mocap_odom.update();
}

void MY_TASK1::publishVisualOdometry()
{
	_pub_visual_odom.get().timestamp_sample = _timeStamp;

	Tag::corr_pkg_t pos = _ret.getposition(true);
	_pub_visual_odom.get().position[0] = pos.x;
	_pub_visual_odom.get().position[1] = pos.y;
	_pub_visual_odom.get().position[2] = pos.z;
	_pub_visual_odom.update();

	// one method for determining velocity
/*
	float dt = (hrt_absolute_time() - _timeStamp) / 1.0e6f;
	float vx = (old_x - pos.x)/dt;
	float vy = (old_y - pos.y)/dt;
	float vz = (old_z - pos.z)/dt;

	_pub_visual_odom.get().velocity[0] = vx;
	_pub_visual_odom.get().velocity[1] = vy;
	_pub_visual_odom.get().velocity[2] = vz;

*/
	_pub_visual_odom.get().timestamp = hrt_absolute_time();
	_pub_visual_odom.update();
}

int MY_TASK1::print_status()
{
	PX4_INFO("Running");
	// TODO: print additional runtime information about the state of the module

	return 0;
}

int MY_TASK1::custom_command(int argc, char *argv[])
{
	PX4_INFO("costum command of MY_TASK1");
	/*
	if (!is_running()) {
		print_usage("not running");
		return 1;
	}

	// additional custom commands can be handled like this:
	if (!strcmp(argv[0], "do-something")) {
		get_instance()->do_something();
		return 0;
	}
	 */

	return print_usage("unknown command");
}


int MY_TASK1::task_spawn(int argc, char *argv[])
{
	_task_id = px4_task_spawn_cmd("MY_TASK1",
				      SCHED_DEFAULT,
				      SCHED_PRIORITY_DEFAULT,
				      1024,
				      (px4_main_t)&run_trampoline,
				      (char *const *)argv);

	if (_task_id < 0) {
		_task_id = -1;
		return -errno;
	}

	return 0;
}

MY_TASK1 *MY_TASK1::instantiate(int argc, char *argv[])
{
	int example_param = 0;
	bool example_flag = false;
	bool error_flag = false;

	int myoptind = 1;
	int ch;
	const char *myoptarg = nullptr;

	// parse CLI arguments
	while ((ch = px4_getopt(argc, argv, "p:f", &myoptind, &myoptarg)) != EOF) {
		switch (ch) {
Section that describes the provided module functionality.
		case 'p':
			example_param = (int)strtol(myoptarg, nullptr, 10);
			break;

		case 'f':
			example_flag = true;
			break;

		case '?':
			error_flag = true;
			break;

		default:
			PX4_WARN("unrecognized flag");
			error_flag = true;
			break;
		}
	}

	if (error_flag) {
		return nullptr;
	}

	MY_TASK1 *instance = new MY_TASK1(example_param, example_flag);

	if (instance == nullptr) {
		PX4_ERR("alloc failed");
	}

	return instance;
}


MY_TASK1::MY_TASK1(int example_param, bool example_flag)
	: ModuleParams(nullptr)
{

}



void MY_TASK1::run()
{

	while (!should_exit()) {

		 _timeStamp = hrt_absolute_time();

		publishMocapOdometry();

	// for velocity determination

/* 		Tag::position_t pos = _ret.getposition(true);
		old_x = pos.x;
		old_y = pos.y;
		old_z = pos.z;
*/

	}
}



void MY_TASK1::parameters_update(bool force)
{
	// check for parameter updates
	if (_parameter_update_sub.updated() || force) {
		// clear update
		parameter_update_s update;
		_parameter_update_sub.copy(&update);

		// update parameters from storage
Section that describes the provided module functionality.
		updateParams();
	}
}

int MY_TASK1::print_usage(const char *reason)
{
	if (reason) {
		PX4_WARN("%s\n", reason);
	}

	PRINT_MODULE_DESCRIPTION(
		R"DESCR_STR(
### Description
Section that describes the provided module functionality.

This is a template for a module running as a task in the background with start/stop/status functionality.

### Implementation
Section describing the high-level implementation of this module.

### Examples
CLI usage example:
$ module start -f -p 42

)DESCR_STR");

	PRINT_MODULE_USAGE_NAME("module", "template");
	PRINT_MODULE_USAGE_COMMAND("start");
	PRINT_MODULE_USAGE_PARAM_FLAG('f', "Optional example flag", true);
	PRINT_MODULE_USAGE_PARAM_INT('p', 0, 0, 1000, "Optional example parameter", true);
	PRINT_MODULE_USAGE_DEFAULT_COMMANDS();

	return 0;
}

int MY_TASK1_main(int argc, char *argv[])
{
	return MY_TASK1::main(argc, argv);
}
