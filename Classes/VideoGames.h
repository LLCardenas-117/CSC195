#pragma once

#include <string>

class VideoGames {
public:
	enum class eType {
		EVERYONE,
		EVERYONETENUP,
		TEEN,
		MATURE
	};

	std::string gameName;
	float rating;

	virtual void Read(std::ostream& ostream, std::istream& istream);
	virtual void Write(std::ostream& ostream);

	std::string getName();

	virtual eType getType() = 0;
};