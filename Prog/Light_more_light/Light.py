def toggle_lights(n):
    lights = [False] * n  # Initialize all lights to be off

    for i in range(1, n + 1):
        for j in range(i - 1, n, i):
            lights[j] = not lights[j]  # Toggle the switch of the jth light

    return lights

# Test the function
num_bulbs = 10
bulb_states = toggle_lights(num_bulbs)
for i, state in enumerate(bulb_states):
    print(f"Bulb {i + 1}: {'On' if state else 'Off'}")
