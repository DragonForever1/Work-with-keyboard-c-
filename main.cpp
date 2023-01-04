INPUT input;
	WORD vKey = VK_KEY;
	input.type = INPUT_KEYBOARD;
	input.ki.wScan = MapVirtualKey(vKey, MAPVK_VK_TO_VSC);
	input.ki.wVk = vKey;
	SendInput(1, &input, sizeof(INPUT));

	input.ki.dwFlags = KEYEVENTF_KEYUP;
	SendInput(1, &input, sizeof(INPUT)); 
}
