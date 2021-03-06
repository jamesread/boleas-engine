#pragma once

enum ActionInput {
	AI_NOOP = 0,

	WALK_LEFT,
	WALK_RIGHT,
	WALK_UP,
	WALK_DOWN,

	_MENU_START,
	MENU_UP,
	MENU_DOWN,
	MENU_LEFT,
	MENU_RIGHT,
	MENU_SHOW,
	MENU_CLICK,
	MENU_ITEM_SELECT,
	MENU_BACK,
	_MENU_END,

	POINT,

	ACTION,

	JOIN_GAME,
	LEAVE_GAME,

	QUIT
};

enum ActionInputType {
	OTHER,
	WALK,
	USE_MENU
};

