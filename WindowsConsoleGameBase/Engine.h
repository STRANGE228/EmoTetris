#pragma once

#include <set>
#include "PaintDevice.h"

class Engine {
public:
	enum class ErrorCode
	{
		success = 0,
		paint_device_not_ready
	};

	ErrorCode run();

protected:
	void track_key(const int key);
	void untrack_key(const int key);

	PaintDevice& paint_device() { return m_PaintDevice; }

	virtual bool end() const  { return false; }
	virtual void on_button_press(const int button) {}
	virtual void update(const int dt) {}
	virtual void render(PaintDevice& paintDevice) {}

private:
	void uppdateInput();

	PaintDevice m_PaintDevice;
	std::set<int> m_PressedKeys;
	std::set<int> m_TrackedKeys;
};
