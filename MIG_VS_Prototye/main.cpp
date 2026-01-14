#include <iostream>
#include <windows.h>

using namespace std;

void trackMousePosition() {
    POINT cursorPosition;
    if (GetCursorPos(&cursorPosition)) { // Получаем глобальные координаты мыши
        cout << "Координаты мыши относительно экрана: (" << cursorPosition.x << ", " << cursorPosition.y << ")\n";
    }
}

int main() {
    while (true){
        trackMousePosition();
    }
}