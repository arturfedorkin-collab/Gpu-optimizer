
#include <string>
#include <map>
using namespace std;

struct GPUProfile {
    string fps;
    string preset;
    string level;
};

map<string, GPUProfile> gpuProfiles = {
    {"GTX 1050 Ti", {"70-120", "Баланс FPS для слабых ПК", "low"}},
    {"GTX 1650", {"90-150", "Стабильный FPS", "medium"}},
    {"GTX 1660 Super", {"120-220", "Сбалансированная производительность", "good"}},

    {"GeForce RTX 3050", {"110-180", "Хорошая картинка + стабильный FPS", "good"}},
    {"GeForce RTX 3060", {"180-300+", "Максимально сбалансированный профиль", "high"}},
    {"GeForce RTX 4060", {"220-350+", "Высокий FPS + красивая картинка", "high"}},
    {"GeForce RTX 4070", {"300-450+", "Ультра баланс", "ultra"}},
    {"GeForce RTX 4070 SUPER", {"350-500+", "Киберспорт + ультра графика", "ultra"}},

    {"GeForce RTX 5060", {"300-450+", "Новая архитектура + высокий FPS", "ultra"}},
    {"GeForce RTX 5060 Ti", {"330-500+", "Высокая производительность", "ultra"}},
    {"GeForce RTX 5070", {"400-550+", "Максимальный баланс", "max"}},
    {"GeForce RTX 5070 Ti", {"450-600+", "Максимальная производительность", "max"}}
};

void printSettings(string level) {
    cout << "\n Настройки Dota 2:\n";

    if (level == "low") {
        cout << "Текстуры: Средние\n";
        cout << "Эффекты: Низкие\n";
        cout << "Тени: Выкл\n";
        cout << "Сглаживание: Выкл\n";
        cout << "Качество экрана: 85-90%\n";
        cout << "FSR: Вкл при просадках\n";
        cout << "Макс FPS: 120\n";
    }

    else if (level == "medium") {
        cout << "Текстуры: Высокие\n";
        cout << "Эффекты: Средние\n";
        cout << "Тени: Низкие\n";
        cout << "Сглаживание: Выкл\n";
        cout << "Качество экрана: 90-95%\n";
        cout << "FSR: Выкл\n";
        cout << "Макс FPS: 144\n";
    }

    else if (level == "good") {
        cout << "Текстуры: Высокие\n";
        cout << "Эффекты: Средние\n";
        cout << "Тени: Средние\n";
        cout << "Сглаживание: Вкл\n";
        cout << "Качество экрана: 95%\n";
        cout << "FSR: Выкл\n";
        cout << "Макс FPS: 144 / 165\n";
    }

    else if (level == "high") {
        cout << "Текстуры: Высокие\n";
        cout << "Эффекты: Высокие\n";
        cout << "Тени: Средние\n";
        cout << "Сглаживание: Вкл\n";
        cout << "Качество экрана: 100%\n";
        cout << "FSR: Выкл\n";
        cout << "Макс FPS: 240\n";
    }

    else if (level == "ultra") {
        cout << "Текстуры: Очень высокие\n";
        cout << "Эффекты: Очень высокие\n";
        cout << "Тени: Высокие\n";
        cout << "Сглаживание: Вкл\n";
        cout << "Качество экрана: 100%\n";
        cout << "FSR: Выкл\n";
        cout << "Макс FPS: 300 / 400\n";
    }

    else if (level == "max") {
        cout << "Текстуры: Максимум\n";
        cout << "Эффекты: Максимум\n";
        cout << "Тени: Высокие\n";
        cout << "Сглаживание: Вкл\n";
        cout << "Качество экрана: 100%\n";
        cout << "FSR: Выкл\n";
        cout << "Макс FPS: 500\n";
    }
}

void printLaunchOptions() {
    cout << "\n Параметры запуска Dota 2:\n";
    cout << "-novid -high -map dota -prewarm -nod3d9ex -nohltv -novr -dx11 +dota_embers 0 +map_enable_background_maps 0\n";

    cout << "\n Что они означают:\n";
    cout << "-novid: пропускает заставку Valve\n";
    cout << "-high: высокий приоритет игры\n";
    cout << "-map dota: предзагрузка карты\n";
    cout << "-prewarm: предварительная загрузка ресурсов\n";
    cout << "-nod3d9ex: может помочь старым системам\n";
    cout << "-nohltv: отключает лишние функции трансляции\n";
    cout << "-novr: отключает VR\n";
    cout << "-dx11: хороший вариант для NVIDIA\n";
    cout << "-vulkan: можно использовать для AMD/Linux\n";
    cout << "+dota_embers 0: отключает частицы меню\n";
    cout << "+map_enable_background_maps 0: отключает анимированное меню\n";
}

int main() {
    string gpu;

    cout << "Dota 2 GPU Optimizer C++\n";
    cout << "Введите название видеокарты:\n";
    getline(cin, gpu);

    if (gpuProfiles.find(gpu) != gpuProfiles.end()) {
        GPUProfile profile = gpuProfiles[gpu];

        cout << "\n Видеокарта: " << gpu << endl;
        cout << "Профиль: " << profile.preset << endl;
        cout << "Ожидаемый FPS: " << profile.fps << endl;

        printSettings(profile.level);
        printLaunchOptions();
    } else {
        cout << "\n Видеокарта не найдена в базе.\n";
        cout << "Добавь её в gpuProfiles.\n";
    }

    return 0;
}