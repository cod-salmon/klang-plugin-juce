
#include "klang.h"
using namespace klang::optimised;

struct SimpleGain : Effect {

	// Initialise plugin (called once at startup)
	SimpleGain() {
		controls = { 
			Dial("Gain", 0.0, 2.0, 0.25),
		};
	}

	// Apply processing (called once per sample)
	void process() {
		param gain = controls[0];
		in * gain >> out;
	}
};