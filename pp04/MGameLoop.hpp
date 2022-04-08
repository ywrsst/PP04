#pragma once
#include <chrono>
#include <thread>
#include "MConsolUtil.hpp"

using namespace std;

namespace MuSeoun_Engine
{
	class MGameLoop
	{
	private:
		bool _isGameRunning;
		MConsoleRenderer cRenderer;
		chrono::system_clock::time_point startRenderTimePoint;

	public:
		MGameLoop() { _isGameRunning = false; }
		~MGameLoop() {}

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

	private:
		void Initialize()
		{

		}
		void Release()
		{
		}

		void Input()
		{
			chrono::system_clock::time_point startRenderTimePoint = chrono::system_clock::now();

			float sum;
			int count;
			sum = 0;
			count = 0;
			cRenderer.Clear();



			cRenderer.MoveCursor(10, 20);

			cout << "Rendering...";
			chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;
			sum += renderDuration.count();
			cout << "fps : " << renderDuration.count() << "sec" << endl;


			string fps = "FPS(milliseconds) : " + to_string(renderDuration.count());
			cRenderer.DrawString(fps);
			

		}
		void Update()
		{

		}
		void Render()
		{
			float sum;
			int count;
			sum = 0;
			count = 0;
			cRenderer.Clear();
			
				cRenderer.MoveCursor(10, 20);

				cout << "Rendering...";
				chrono::duration<double> renderDuration = chrono::system_clock::now() - startRenderTimePoint;
				sum += renderDuration.count();
				cout << "fps : " << renderDuration.count() << "sec" << endl;


				string fps = "FPS(milliseconds) : " + to_string(1/renderDuration.count());
				cRenderer.DrawString(fps);
				
		}


		//cout << "Rendering Speed : " << renderDuration.count() << "sec" << endl;

		//int remainingFrameTime = 100 - (int)(renderDuration.count() * 1000.0);
		//if (remainingFrameTime > 0)
		//	this_thread::sleep_for(chrono::milliseconds(remainingFrameTime));




	};






}