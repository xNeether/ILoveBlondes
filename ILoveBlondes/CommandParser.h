#pragma once
#include <string>

enum CommandType {
	CREATE_TABLE,
	DROP_TABLE,
	DISPLAY_TABLE,
	CREATE_INDEX,
	DROP_INDEX,
	INSERT,
	DELETE,
	SELECT,
	UPDATE,
	EXIT,
	UNKNOWN
};

class CommandParser {
private:
	CommandType getCommandType(std::string command);
	void handleCreateTable(std::string command);
	void handleDropTable(std::string command);
	void handleDisplayTable(std::string command);
	void handleCreateIndex(std::string command);
	void handleDropIndex(std::string command);
	void handleInsert(std::string command);
	void handleDelete(std::string command);
	void handleSelect(std::string command);
	void handleUpdate(std::string command);
public:
	void processCommand(std::string command);
	CommandParser();
	~CommandParser();
};