#ifndef CALLBACK_H
#define CALLBACK_H

class callback {
	private:
		s8 callType = -1; // Type of callback outputs to here. Default value is -1;
		
		void WiiPowerPressed(){callType=4;};
		 // When the Wii's power is pressed, callType is 4; 4 will shut down or put the wii on standby depending on the Wii's setiings.

		void WiiResetPressed(){callType=3;};
		// callType is 3, which means it will return to the channels. FIXME: review types of callbacks.
		
		void WiimotePowerPressed(s32 chan){callType=4;};
	public:
		void set(){
		// Set these functions to execute when the callback is received from the Wii.
		SYS_SetResetCallback(WiiResetPressed);
		SYS_SetPowerCallback(WiiPowerPressed);
		WPAD_SetPowerButtonCallback(WiimotePowerPressed);
		};
		
		bool check(){
			return callType != -1; // Returns false when default value, but when callback is called, this will return true.
		};
