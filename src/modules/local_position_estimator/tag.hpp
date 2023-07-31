#pragma once
#include <drivers/device/i2c.h>

class Tag: public device::I2C
{

public:

	Tag();

	typedef struct __attribute__((packed)) {

	/** The x-coordinate in m */
	float x;
	/** The y-coordinate in m */
	float y;
	/** The z-coordinate in m */
	float z;

	/** The target x-coordinate in m */
	float targetX;
	/** The target y-coordinate in m */
	float targetY;
	/** The target z-coordinate in m */
	float targetZ;

	uint16_t crc16;

	} corr_pkg_t;

	corr_pkg_t getposition(bool NED);

private:

	corr_pkg_t position;	// for reading sensor
	corr_pkg_t payload;
	uint8_t len = 26;
	uint8_t buf[26];

};

