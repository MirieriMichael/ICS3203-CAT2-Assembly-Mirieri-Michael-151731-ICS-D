#include <stdio.h>

int main() {
    int number;

    // Prompt user input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Branching logic
    if (number > 0) {
        printf("POSITIVE\n");
    } else if (number < 0) {
        printf("NEGATIVE\n");
    } else {
        printf("ZERO\n");
    }

    // Documentation:
    // - `if` checks for positive numbers.
    // - `else if` checks for negative numbers.
    // - `else` handles the case where the number is zero.
    // - This ensures all cases are covered.
    return 0;
}
#include <stdio.h>

int main() {
    int arr[5], temp, i, n = 5;

    // Input array
    printf("Enter 5 integers: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reverse array in place
    for (i = 0; i < n / 2; i++) {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    }

    // Output reversed array
    printf("Reversed array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Documentation:
    // - Swapping elements at the beginning with those at the end.
    // - Temporary variable `temp` is used for swapping.
    // - Loop iterates up to half the array to avoid unnecessary swaps.
    return 0;
}
#include <stdio.h>

// Function to calculate factorial
int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1; // Base case
    }
    return n * factorial(n - 1); // Recursive call
}

int main() {
    int num;

    // Input number
    printf("Enter a number to calculate its factorial: ");
    scanf("%d", &num);

    // Validate input
    if (num < 0) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        // Compute factorial
        int result = factorial(num);
        printf("Factorial of %d is %d\n", num, result);
    }

    // Documentation:
    // - Factorial is calculated recursively in the `factorial()` function.
    // - This modular approach improves code reusability and readability.
    return 0;
}
#include <stdio.h>

int main() {
    int sensor_value;
    int motor_status = 0; // 0: off, 1: on
    int alarm_status = 0; // 0: off, 1: on

    // Input sensor value
    printf("Enter the water level (0 to 100): ");
    scanf("%d", &sensor_value);

    // Control logic
    if (sensor_value > 80) {
        motor_status = 0; // Turn off motor
        alarm_status = 1; // Trigger alarm
        printf("Alarm triggered: Water level is too high. Motor stopped.\n");
    } else if (sensor_value >= 50) {
        motor_status = 1; // Turn on motor
        alarm_status = 0; // Alarm off
        printf("Motor is running: Water level is moderate.\n");
    } else {
        motor_status = 0; // Turn off motor
        alarm_status = 0; // Alarm off
        printf("Motor stopped: Water level is low.\n");
    }

    // Documentation:
    // - Sensor value input simulates reading from a port.
    // - Motor and alarm states are set based on thresholds.
    // - Memory (variables) is manipulated to represent hardware control.
    return 0;
}
