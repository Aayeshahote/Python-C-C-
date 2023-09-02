def count_lost_working_days(N, hartal_parameters):
    working_days = 0

    for day in range(1, N + 1):
        if day % 7 != 6 and day % 7 != 0:  # Check if it's not a Friday or Saturday
            for parameter in hartal_parameters:
                if day % parameter == 0:
                    working_days += 1
                    break

    return working_days

# Test the function
N = 14
hartal_parameters = [3, 4, 8]
lost_working_days = count_lost_working_days(N, hartal_parameters)
print("Number of working days lost:", lost_working_days)
