#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool* toggle_lights(int n) {
    bool* lights = (bool*)malloc(n * sizeof(bool)); // Initialize all lights to be off

    for (int i = 1; i <= n; ++i) {
        for (int j = i - 1; j < n; j += i) {
            lights[j] = !lights[j]; // Toggle the switch of the jth light
        }
    }

    return lights;
}

int main() {
    int num_bulbs = 10;
    bool* bulb_states = toggle_lights(num_bulbs);
    
    for (int i = 0; i < num_bulbs; ++i) {
        printf("Bulb %d: %s\n", i + 1, (bulb_states[i] ? "On" : "Off"));
    }

    free(bulb_states);

    return 0;
}

