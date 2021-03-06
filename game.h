#pragma once

namespace Tmpl8 {

class Game
{
public:
	void SetTarget( Surface* _Surface ) { screen = _Surface; }
	void Init();
	int Evaluate();
	void Shutdown();
	void Tick( float _DT );
	void MouseUp( int _Button ) { /* implement if you want to detect mouse button presses */ }
	void MouseDown( int _Button ) { /* implement if you want to detect mouse button presses */ }
	void MouseMove( int _X, int _Y ) { /* implement if you want to detect mouse movement */ }
	void KeyUp( int _Key ) { /* implement if you want to handle keys */ }
	void KeyDown( int _Key ) { /* implement if you want to handle keys */ }
private:
	Surface* screen;
};

}; // namespace Tmpl8