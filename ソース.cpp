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

	Sp.MainText = "吾輩はボケである。ボケを3度の食事より愛し3度の飯も食うのである、今日この日この構造を提出したことに意義を感じている。";
	Sp.Name = "適当な仕様書構造について。";
	Sp.coText = "意味はないが意義を果たしたい。";
	Sp.Page.push_back({ {1,2,3,4,6,5},"見よタイポした数列である"});

}