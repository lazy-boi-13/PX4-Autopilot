#include "tag.hpp"

const char* mydevice;
const int bus = 1;	// there is only one I2C bus in holybro_kakuteh7mini
const uint32_t busfrequency = 110000; // has to be higher than 100 Khz otherwise the device is too slow for the bus
const uint16_t address = 0x37;	// i2c adress of tag is actually 0x65 but gets bitshifted thus it becomes 0x37

Tag::Tag():I2C(0xFF, mydevice, bus, address, busfrequency)
{
	this->init();
}


Tag::corr_pkg_t Tag::getposition(bool NED = false)
{
	int pos = this->transfer(nullptr,0,buf,len);
	memcpy(&payload,buf,26);

	if (pos == PX4_OK && NED == false)
	{
		position.x = payload.x;
		position.y = payload.y;
		position.z = payload.z;
	}

	//moving the origin and transform the tdoa system into a North East Down (NED) frame meaning
	//x should increase when moving forward (north)
	//y should increase when moving to the right (east)
	//z should decrease when moving up (down)

	else if (pos == PX4_OK && NED == true)
	{
		position.x = payload.y - float(1.75);
		position.y = payload.x - float(2.01);
		position.z = -payload.z + float(0.2);
	}

	return position;
}
