#include <iostream>
#include <vector>

std::vector<bool> toggle_lights(int n) {
    std::vector<bool> lights(n, false); // Initialize all lights to be off

    for (int i = 1; i <= n; ++i) {
        for (int j = i - 1; j < n; j += i) {
            lights[j] = !lights[j]; // Toggle the switch of the jth light
        }
    }

    return lights;
}

int main() {
    int num_bulbs = 10;
    std::vector<bool> bulb_states = toggle_lights(num_bulbs);
    
    for (int i = 0; i < bulb_states.size(); ++i) {
        std::cout << "Bulb " << i + 1 << ": " << (bulb_states[i] ? "On" : "Off") << std::endl;
    }

    return 0;
}

