#pragma once
#include "../BiT.GUI/Menu.hpp"
#include "../PlatformAPI.hpp"

namespace BiT
{
	namespace devkit
	{
		class Devkit
		{
		public:
			void initDk()
			{
				dk_menu.addButton("[1] ���ƾ�̬ͼ��");
				dk_menu.addButton("[2] ����֡����");
				dk_menu.addButton("[3] ����");
				dk_menu.addButton("[4] �˳�����");
				setTitle("Back in Time -Devkit Mode");
				dk_menu.registerFunc([]() {setColor(7); std::exit(0); }, 3); // ע���±���㿪ʼ����������Ҫ����Ӧ�±�����ּ�һ��
			}
			void launch()
			{
				while (true)
				{
					clear();
					dk_menu.printSelf();
					int code = dk_menu.onUse();
					if (code == 0)
						staticImage();
					else if (code == 2)
						MessageBoxA(nullptr, "zhouleyi03���� \n-2019/4/5 21:33", "About", 0);
					dk_menu.onUse();
				}
			}
			void staticImage()
			{
				clear();
				std::cout << "helloworld";
			}
		private:
			gui::Menu dk_menu = gui::Menu(5, 1, false);
		};
	}
}