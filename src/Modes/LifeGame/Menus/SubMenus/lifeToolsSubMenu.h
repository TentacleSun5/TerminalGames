#ifndef LIFE_GAME_TOOLS_SUB_MENU_H
#define LIFE_GAME_TOOLS_SUB_MENU_H
#include "../../../../Screen/screen.h"
#include <string>

extern Screen currentScreen;

class LifeToolsSubMenu
{
    private:
        int toolsBarXStart;
        int toolsBarYStart;
        int toolsBarXEnd;
        int toolsBarYEnd;

        int count;
        int rows = 2;
        int currentColumn;
        int currentRow;
        int currentChoice = 0;
        static const int toolsMenuChoiceCount = 8;
        int columns = toolsMenuChoiceCount / rows;
        std::string toolsMenuChoices[toolsMenuChoiceCount] = 
        {
            "Save current state",
            "Load state",
            "Move Left",
            "Move Right",
            "Move Up",
            "Move Down",
            "Pause",
            "Exit",
        };
        enum toolsMenuChoicesConst {Save, Load, Left, Right, Up, Down, Pause, Exit};
        int firstToolsMenuTitle = Save;
        int currentToolsMenuTitle;
        int lastToolsMenuTitle = Exit;
        int currentToolsParameter;

        void menuControllSelect();

    public:
        void initToolsBar(int xStart, int yStart, int xEnd, int yEnd);
        void drawToolsBar();
        void menuControllHandler(int key);
};

#endif