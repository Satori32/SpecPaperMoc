#include <iostream>
#include <cstdint>
#include <vector>
#include <string>

struct SpecPaper {
	struct Item
	{
		std::vector<std::uint8_t> Data;
		std::string Text;
	};

	
	std::string Name;
	std::string MainText;
	std::string coText;
	std::vector<Item> Page;
};

int main() {
	SpecPaper Sp;

	Sp.MainText = "��y�̓{�P�ł���B�{�P��3�x�̐H����舤��3�x�̔т��H���̂ł���A�������̓����̍\�����o�������ƂɈӋ`�������Ă���B";
	Sp.Name = "�K���Ȏd�l���\���ɂ��āB";
	Sp.coText = "�Ӗ��͂Ȃ����Ӌ`���ʂ��������B";
	Sp.Page.push_back({ {1,2,3,4,6,5},"����^�C�|��������ł���"});

}