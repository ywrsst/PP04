#pragma once
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"


using namespace std;

namespace MuSeoun_Engine
{
	class MGameLoop
	{
	private :
		bool _isGameRunning;
		MConsoleRenderer cRenderer;
	public:
		MGameLoop() 
		{
			_isGameRunning = false;
		}
		~MGameLoop(){}

		void Run()
		{
			_isGameRunning = true;

				Initialize();

			while (_isGameRunning)
			{
				Input();
				Update();
				Render();
			}
			Release();
		}
		void Stop()
		{
			_isGameRunning = false;
		}

	private : 
		void Initialize()
		{
			
		}
		void Release()
		{

		}

		void Input()
		{
			/*if (GetAsyncKeyState(VK_SPACE) == -0x8000 || GetAsyncKeyState(VK_SPACE) == -0x8001)
			{

			}
			else
			{

			}*/
		}
		void Update()
		{

		}
		void Render()
		{
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();

			cRenderer.Clear();
			cRenderer.MoveCousor(10, 20);
			
			chrono::duration<double>renderDuration = chrono::system_clock::now() - startRenderTimePoint;//Duration = 활성화된 시간

			string fps = "FPS(milliseconds):" + to_string(renderDuration.count());
			cRenderer.DrawString(fps);

		}

	};
}
//system = 하나의 단말기 